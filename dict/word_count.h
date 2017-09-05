/*************************************************************************
	> File Name: word_count.h
	> Author: Scholegance
	> Mail: 1161280746.com 
	> Created Time: 2017-09-04 14:52:51
 ************************************************************************/

#ifndef _WORD_COUNT_H_
#define _WORD_COUNT_H_

#include "dict.h"

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void scanFile (char* file, DictHT** ht);
char* wordTrim (char* word);
char* wordLower (char* word);

#endif
