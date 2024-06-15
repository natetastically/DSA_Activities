#include "QueueLinked.h"

bool isEmpty(Queue Q){
	bool boolean = false;
	if(Q.front == NULL && Q.rear == NULL){
		boolean = true;
	}
	return boolean;
}

void initialize(Queue *Q){
	Q->front = NULL;
	Q->rear = NULL;
}

void eQ(Queue *Q, int data){
	NodePtr newNode = (NodePtr)malloc(sizeof(Node));
	if(newNode != NULL){
		newNode->data = data;
		newNode->link = NULL;
	}
	bool boolean = isEmpty(*Q);
	if(boolean == true){
		Q->front = newNode;
		Q->rear = newNode;
	}
	else{
		Q->rear->link = newNode;
		Q->rear = newNode;
	}
}

void deQ(Queue *Q){
	NodePtr temp;
	temp = Q->front;
	Q->front = temp->link;
	free(temp);
}

int Front(Queue Q){
	int val;
	val = Q.front->data;
	return val;
}

int Rear(Queue Q){
	int val;
	val = Q.rear->data;
	return val;
}

void display(Queue Q){
	NodePtr trav;
	for(trav = Q.front; trav != NULL; trav = trav->link){
		printf("[%d]->", trav->data);
	}
}
