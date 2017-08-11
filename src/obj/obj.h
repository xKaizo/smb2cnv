/***************
      OBJ.H
***************/
#ifndef OBJ_H
#define OBJ_H

//Include global header
#include "../global.h"

//Structs
typedef struct
{
	float x;
	float y;
	float z;
} vec3;
typedef struct
{
	int va;
	int vb;
	int vc;
	int vna;
	int vnb;
	int vnc;
} triangle;
typedef struct
{
	vec3f d[65536];
} verts;
typedef struct
{
	vec3f d[65536];
} norms;
typedef struct
{
	char name[80];
	triangle tris[65536];
	int count;
} obj;

//Variables
verts gVerts;
norms gNorms;
obj gObjs[256];
extern int numVerts;
extern int numNorms;
extern int numObjs;

//Functions
void parseObj(char * dir);

#endif
