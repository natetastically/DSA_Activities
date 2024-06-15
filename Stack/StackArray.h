#ifndef STACK_ARRAY
#define STACK_ARRAY
#include <stdbool.h>
#define MAX 5


typedef struct{
	int data[MAX];
	int top;
}StackArrayList;

void initStack(StackArrayList *S);
StackArrayList createStack();

bool isEmpty(StackArrayList S);
bool isFull(StackArrayList S);

bool Stack_Push(StackArrayList *S, int elem);
bool Stack_Pop(StackArrayList *S);
int Stack_Peek(StackArrayList S);

void display(StackArrayList S); // no traversal
void visualize(StackArrayList S); // have traversal for visualization only

//extra functions
//create a function that will get all the even numbers and transfer it to another stack and also remove said even numbers from the old stack

StackArrayList Get_Even(StackArrayList *S);


#endif


