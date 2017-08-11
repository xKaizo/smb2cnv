/***************
    GLOBAL.C
***************/
#include "global.h"

//Functions
/***********
isWhiteSpace(char);

Determine if a character is whitespace

Arguments:
    char x: character to test
Return value:
    int: 1 if whitespace, 0 otherwise
***********/
int isWhiteSpace(char x)
{
	if(((x&0xE0)==0)||(x==32)||(x==127)||((x&0x80)!=0))
	{
		return 1;
	}
	return 0;
}

/***********
nextChar(char*,int);

Get index of next non-whitespace
    character

Arguments:
    char * str: string to test
    int idx: starting index in string
Return value:
    int: index of next non-whitespace
        character
***********/
int nextChar(char * str,int idx)
{
	while(isWhiteSpace(str[idx])) {idx++};
	return idx;
}

/***********
strSplit(char*,int);

Get all characters before a whitespace
    character

Arguments:
    char * str: string to test
    int idx: starting index in string
Return value:
    char *: string with characters
***********/
char * strSplit(char * str,int idx)
{
	static char strOut[80];
	int idxOut = 0;
	while(isWhiteSpace(str[idx]))
	{
		strOut[idxOut++] = str[idx++];
	}
	return strOut;
}

/***********
strSplitEx(char*,int,int,char*);

Get all characters before a specific
    character(s)

Arguments:
    char * str: string to test
    int idx: starting index in string
    int cnt: number of characters to test
    char * split: character(s) to test
Return value:
    char *: string with characters
***********/
char * strSplitEx(char * str,int idx,int cnt,char * split)
{
	static char strOut[80];
	int idxOut = 0;
	while(true)
	{
		int test = 0;
		for(int i=0; i<cnt; i++)
		{
			if(str[idx]==split[i]) {test=1;}
		}
		if(test!=0) {break;}
		strOut[idxOut++] = str[idx++];
	}
	return strOut;
}
