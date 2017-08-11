/***************
      OBJ.C
***************/
#include "xml.h"

//Variables
int numVerts = 0;
int numNorms = 0;
int numObjs = 0;

//Functions
/***********
parseObj(char*);

Parses an .obj file and fills the
    vertex/primitive buffers with
    its data

Arguments:
    char * dir: path to .obj file
Return value:
    void
***********/
void parseObj(char * dir)
{
	FILE * objFile = fopen(dir,"r");
	char line[80];
	while(fgets(line,80,objFile)!=NULL)
	{
		int lineIdx = nextChar(line,0);
		char a = line[lineIdx++];
		if(a=='v')
		{
			char b = line[lineIdx++];
			if(isWhiteSpace(b))
			{
				lineIdx = nextChar(line,lineIdx);
				char ax[80] = strSplit(line,lineIdx);
				lineIdx = nextChar(line,lineIdx);
				char ay[80] = strSplit(line,lineIdx);
				lineIdx = nextChar(line,lineIdx);
				char az[80] = strSplit(line,lineIdx);
				float x = strtof(ax,NULL);
				float y = strtof(ax,NULL);
				float z = strtof(ax,NULL);
				gVerts[numVerts].x = x;
				gVerts[numVerts].y = y;
				gVerts[numVerts++].z = z;
			}
			else if(b=='n')
			{
				lineIdx = nextChar(line,lineIdx);
				char ax[80] = strSplit(line,lineIdx);
				lineIdx = nextChar(line,lineIdx);
				char ay[80] = strSplit(line,lineIdx);
				lineIdx = nextChar(line,lineIdx);
				char az[80] = strSplit(line,lineIdx);
				float x = strtof(ax,NULL);
				float y = strtof(ax,NULL);
				float z = strtof(ax,NULL);
				gNorms[numNorms].x = x;
				gNorms[numNorms].y = y;
				gNorms[numNorms++].z = z;
			}
		}
		else if(a=='f')
		{
			lineIdx = nextChar(line,lineIdx);
			//TODO
		}
		else if((a=='o')||(a=='g'))
		{
			lineIdx = nextChar(line,lineIdx);
			//TODO
		}
	}
	fclose(objFile);
}
