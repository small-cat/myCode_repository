/*************************************************************************
	> File Name: dict.c
	> Author: Scholegance
	> Mail: 1161280746@qq.com
	> Created Time: 2017-09-02 14:53:40
 ************************************************************************/

#include "dict.h"

/* ========================================================================== */
/* ========================== static functions ============================== */
/* ========================================================================== */
static unsigned long _dictNextPower (unsigned long size) {
    unsigned long i = DICT_HT_INIT_SIZE;
    if (size >= LONG_MAX) {
        return LONG_MAX;
    }

    while (i < size) {
        i = (i * 3) >> 1;   /* i*1.5 */
    }

    return i;
}

static int _dictExpandIfNeeded (DictHT* ht) {
    if (0 == ht->size) {
        return dictExpand (ht, DICT_HT_INIT_SIZE);
    }

    if (ht->used >= ht->size) {
        return dictExpand (ht, ht->used*2);
    }

    return DICT_OK;
}

static unsigned int _dictKeyIndex (DictHT* ht, const void* key) {
    unsigned int index = 0;

    index = dictHashKey (key) & (ht->size - 1); //make sure index is in the
                                        //range from 0 to ht->size
    return index;
}

static void _dictFreeEntry (DictEntry* entry) {
    entry->next = NULL;
    free ((char*)entry->key);
    free ((int*)entry->value);
    free (entry);
    entry = NULL;
}

static void _dictReset (DictHT* ht) {
    free (ht->table);
    ht->table = NULL;
    ht->used = 0;
    ht->size = 0;
}

/* -------------------- dict operations ------------------ */
/***********************************************************
 * 函数名: dictCreate
 * 函数功能: create hash table
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-02 15:24
***********************************************************/
DictHT* dictCreate () {
    DictHT* ht = (DictHT*) malloc (sizeof(DictHT));
    ERR_PRINT (NULL==ht, exit(EXIT_FAILURE), "dictCreate, line:%d", __LINE__);

    ht->table = NULL;
    ht->size = 0;
    ht->used = 0;
    return ht;
}

/***********************************************************
 * 函数名: dictCreateWCEntry
 * 函数功能: create entry to statistic word count, key is word,
 * value is number of word
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-02 15:47
***********************************************************/
DictEntry* dictCreateWCEntry (void* key, void* value) {
    DictEntry* entry = (DictEntry*) malloc (sizeof(DictEntry));
    ERR_PRINT (NULL==entry, exit(EXIT_FAILURE), "dictCreateWCEntry, lines: %d",
            __LINE__);

    char* _key = (char*)key;
    int len = strlen(_key);
    entry->key = (char*) malloc (sizeof(char) * len + 1);
    ERR_PRINT (NULL==entry->key, exit(EXIT_FAILURE),
            "dictCreateWCEntry, lines: %d", __LINE__);
    strncpy (entry->key, _key, len);
    ((char*)entry->key)[len] = '\0';
    entry->value = (int*) malloc (sizeof(int));
    ERR_PRINT (NULL==entry->value, exit(EXIT_FAILURE), 
            "dictCreateWCEntry, %d", __LINE__);
    *(int*)(entry->value) = *(int*)value;
    entry->next = NULL;

    return entry;
}

/***********************************************************
 * 函数名:
 * 函数功能: expand hash table
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-02 15:32
***********************************************************/
int dictResize (DictHT* ht) {
    unsigned long minimal = 0;
    minimal = ht->used;

    if (minimal < DICT_HT_INIT_SIZE) {
        minimal = DICT_HT_INIT_SIZE;
    }

    return dictExpand (ht, minimal);
}

/***********************************************************
 * 函数名: dictExpand
 * 函数功能: expand hash table
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-03 17:17
***********************************************************/
int dictExpand (DictHT* ht, unsigned long size) {
    unsigned long realsize = _dictNextPower (size);

    ht->table = (DictEntry**) realloc (ht->table,
            sizeof(DictEntry*) * realsize);
    ERR_PRINT (NULL==ht->table, exit(EXIT_FAILURE), "dictExpand, line: %d",
            __LINE__);

    ht->size = realsize;
    return DICT_OK;
}

int dictAdd (DictHT* ht, void* key, void* value) {
    int index;
    DictEntry* entry;

    if (_dictExpandIfNeeded (ht) == DICT_ERR) {     // to expand hash
        return DICT_ERR;
    }

    if ((index = _dictKeyIndex(ht, key)) > 0) {   // key has existed in ht
        // update value, eg. count of word
        entry = ht->table[index];
        while (entry) {
            if (dictCompareKeys (key, entry->key) == 0) {   // TODO
                updateEntryValue (entry, value);
                return DICT_OK;
            }
            entry = entry->next;
        }
    }

    entry = dictCreateWCEntry (key, value);
    entry->next = ht->table[index];
    ht->table[index] = entry;
    ht->used++;

    return DICT_OK;
}

/***********************************************************
 * 函数名: dictFind
 * 函数功能: find key in hash
 * 参数说明:
 * 返回值说明: if key exists, return 1, or 0
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-03 19:38
***********************************************************/
int dictFind (DictHT* ht, void* key) {
    unsigned int idx = _dictKeyIndex (ht, key);
    DictEntry* entry = ht->table[idx];

    while (entry) {
        if (dictCompareKeys (key, entry->key) == 0) {
            return 1;
        }
        entry = entry->next;
    }

    return 0;
}

int dictDelete (DictHT* ht, void *key) {
    if (dictFind (ht, key) == 0) {
        return DICT_ERR;
    }

    unsigned int idx = _dictKeyIndex (ht, key);
    DictEntry* cur = ht->table[idx];
    DictEntry* prev= NULL;

    while (cur) {
        //delete from single list
        if (dictCompareKeys (key, cur->key) == 0) {
            if (prev) {
                prev->next = cur->next;
            } else {
                ht->table[idx] = cur->next;
            }

            _dictFreeEntry (cur);
            return DICT_OK;
        }

        prev = cur;
        cur = cur->next;
    }

    return DICT_ERR;
}

/* ------------------------hash fuctions ----------------------------- */
static uint32_t dict_hash_function_seed = 5381;
unsigned int dictHashKey (const void* key) {
    return dictGetHashFunction ((unsigned char*)key, strlen((char*)key));
}

unsigned int dictGetHashFunction(const void *key, int len) {
    /* 'm' and 'r' are mixing constants generated offline.
     * They're not really 'magic', they just happen to work well.  */
    uint32_t seed = dict_hash_function_seed;
    const uint32_t m = 0x5bd1e995;
    const int r = 24;

    /* Initialize the hash to a 'random' value */
    uint32_t h = seed ^ len;

    /* Mix 4 bytes at a time into the hash */
    const unsigned char *data = (const unsigned char *)key;

    while(len >= 4) {
        uint32_t k = *(uint32_t*)data;

        k *= m;
        k ^= k >> r;
        k *= m;

        h *= m;
        h ^= k;

        data += 4;
        len -= 4;
    }

    /* Handle the last few bytes of the input array  */
    switch(len) {
    case 3: h ^= data[2] << 16;
    case 2: h ^= data[1] << 8;
    case 1: h ^= data[0]; h *= m;
    };

    /* Do a few final mixes of the hash to ensure the last few
       bytes are well-incorporated. */
    h ^= h >> 13;
    h *= m;
    h ^= h >> 15;

    return (unsigned int)h;
}

/***********************************************************
 * 函数名: dictEmpty
 * 函数功能: empty hash, free hash table
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-03 19:57
***********************************************************/
void dictEmpty (DictHT* ht) {
    unsigned long i;
    for (i=0; i<ht->size && ht->used>0; i++) {
        DictEntry *he, *nextHe;
        if ((he=ht->table[i]) == NULL) {
            continue;
        }

        while (he) {
            nextHe = he->next;
            _dictFreeEntry (he);
            ht->used--;
            he = nextHe;
        }
    }

    _dictReset (ht);
}

/* ============================================================ */
/* =================== iterator operations ==================== */
/* ============================================================ */
DictIterator* dictGetIterator (DictHT* ht) {
    DictIterator* iter = (DictIterator*) malloc (sizeof(DictIterator));
    ERR_PRINT (NULL==iter, exit(EXIT_FAILURE), "dictGetIterator, lines: %d",
            __LINE__);

    iter->ht = ht;
    iter->index = -1;
    iter->entry = NULL;
    iter->nextEntry = NULL;
    return iter;
}

DictEntry* dictNext (DictIterator* iter) {
    while (1) {
        if (NULL == iter->entry) {
            iter->index++;

            if (iter->index >= (long)iter->ht->size) {
                break;
            }
            iter->entry = iter->ht->table[iter->index];
        } else {
            iter->entry = iter->nextEntry;
        }

        if (iter->entry) {
            iter->nextEntry = iter->entry->next;
            return iter->entry;
        }
    }
    return NULL;
}

void dictReleaseIterator (DictIterator* iter) {
    iter->ht = NULL;
    iter->index = -1;
    iter->entry = NULL;
    iter->nextEntry = NULL;
    free (iter);
    iter = NULL;
}

/***********************************************************
 * 函数名: dictCompareKeys
 * 函数功能: compare the two keys, this can be implemented with
 * a function pointer
 * 参数说明: rules: no arguments can be NULL
 * 返回值说明: equal         0
 *             greater than  0
 *             litter than   0
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-03 17:21
***********************************************************/
int dictCompareKeys (void* key_src, void* key_dest) {
    char* src  = (char*)key_src;
    char* dest = (char*)key_dest;

    return strcasecmp(src, dest);
}

void updateEntryValue (DictEntry* entry, void* value) {
    int v = *(int*)value;
    *(int*)(entry->value) += v;
}
