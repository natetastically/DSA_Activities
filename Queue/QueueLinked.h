#ifndef QUEUE_LINKED
#define QUEUE_LINKED
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct node{
	int data;
	struct node* link;
}Node, *NodePtr;

typedef struct{
	NodePtr front;
	NodePtr rear;
}Queue;

bool isEmpty(Queue Q);
void initialize(Queue *Q);
void eQ(Queue *Q, int data);
void deQ(Queue *Q);
int Front(Queue Q);
int Rear(Queue Q);
void display(Queue Q);

#endif
