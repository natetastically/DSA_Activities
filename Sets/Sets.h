#ifndef SET
#define SET
#define MAX 10
#include <stdio.h>
#include <stdlib.h>



typedef struct{
	int elements[MAX];
	int size;
}Set;

void addToSet(Set* , int element);
//Set findUnion(Set*);
Set findIntersection(Set , Set );

#endif
