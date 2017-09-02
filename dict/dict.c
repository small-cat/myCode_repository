/*************************************************************************
	> File Name: dict.c
	> Author: Scholegance
	> Mail: 1161280746@qq.com 
	> Created Time: 2017-09-02 14:53:40
 ************************************************************************/

#include "dict.h"

#define MAX_BUFLEN 1024

/***********************************************************
 * 函数名: sys_err
 * 函数功能: print error information on standard output
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-09-02 15:21 
***********************************************************/ 
void sys_err (const char* fmt, ...) {
    va_list ap;
    int err = errno;
    char buf[MAX_BUFLEN] = {0};

    va_start (ap, fmt);
    vsnprintf (buf, sizeof(buf), fmt, ap);
    snprintf (buf+strlen(buf), MAX_BUFLEN-strlen(buf), "- %s\n", strerror(err));

    fprintf (stderr, buf);
    va_end (ap);
}

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
    entry->key[len] = '\0';
    entry->value = (double) value;
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

int dictFind (DictHT* ht, void* key) {
}

int dictDelete (DictHT* ht, void *key) {
}

int dictHashKey (const void* key) {
}

void dictEmpty (DictHT* ht) {
}

void dictFreeEntry (DictEntry* entry) {
}

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
