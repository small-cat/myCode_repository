/*************************************************************************
	> File Name: dict.h
	> Author: Scholegance
	> Mail: 1161280746.com
	> Created Time: 2017-09-02 14:47:57
 ************************************************************************/

#ifndef _DICT_H_
#define _DICT_H_

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdarg.h>
#include <limits.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>

#include "common.h"

#define DICT_HT_INIT_SIZE 4
#define DICT_ERR -1
#define DICT_OK 0

typedef struct _DICT_ENTRY_ {
    void* key;
    void* value;
    struct _DICT_ENTRY_* next;
}DictEntry;

typedef struct _DICT_HASH_TABLE_ {
    DictEntry** table;
    unsigned long size;
    unsigned long used;
}DictHT;                /* hash table */

typedef struct _DICT_ITERATOR_ {
    DictHT* ht;
    long index;
    DictEntry *entry, *nextEntry;
}DictIterator;

/* operations on hash table */
DictHT* dictCreate ();
DictEntry* dictCreateWCEntry (void* key, void* value);
int dictResize (DictHT* ht);
int dictExpand (DictHT* ht, unsigned long size);
int dictAdd (DictHT* ht, void* key, void* value);
int dictDelete (DictHT* ht, void* key);
unsigned int dictHashKey (const void* key);
int dictFind (DictHT* ht, void* key);
unsigned int dictGetHashFunction (const void* key, int len);

void dictEmpty (DictHT* ht);
void dictFreeEntry (DictEntry* he);

DictIterator* dictGetIterator (DictHT* ht);
DictEntry* dictNext (DictIterator* iter);
void dictReleaseIterator (DictIterator* iter);

/* key operations */
int dictCompareKeys (void* key_src, void* key_dest);
void updateEntryValue (DictEntry* entry, void* value);
#endif
