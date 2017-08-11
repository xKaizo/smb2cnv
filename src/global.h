/***************
    GLOBAL.H
***************/
#ifndef GLOBAL_H
#define GLOBAL_H

//Common includes
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Functions
int isWhiteSpace(char x);
int nextChar(char * str,int idx);
char * strSplit(char * str,int idx);
char * strSplitEx(char * str,int idx,int cnt,char * split);

#endif
