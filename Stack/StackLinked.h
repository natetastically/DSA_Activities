#ifndef STACK_LINKED
#define STACK_LINKED
#include <stdbool.h>
#include <stdlib.h>



typedef struct node{
	int data;
	struct node *link;
}Stack, *StackPtr;

void initStackLL(StackPtr *S);
StackPtr createStackLL();

bool isEmptyLL(StackPtr S);
bool Stack_PushLL(StackPtr *S, int elem);
bool Stack_PopLL(StackPtr *S);
int Stack_PeekLL(StackPtr S);

void displayLL(StackPtr S); // no traversal
void visualizeLL(StackPtr S); // have traversal for visualization only

//extra functions
//create a function that will get all the even numbers and transfer it to another stack and also remove said even numbers from the old stack



#endif


