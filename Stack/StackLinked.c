#include "StackLinked.h"


void initStackLL(StackPtr *S){
	*S = NULL;
}

StackPtr createStackLL(){
	StackPtr S;
	S = NULL;
	return S;
}

bool isEmptyLL(StackPtr S){
	bool boolean = false;
	if(S == NULL){
		boolean = true;
	}	
	return boolean;
}

bool Stack_PushLL(StackPtr *S, int elem){
	bool res = false;
	StackPtr newNode = (StackPtr)malloc(sizeof(Stack));
	if(newNode != NULL){
		newNode->data = elem;
		newNode->link = *S;
		*S = newNode;
		res = true;
	}
	return res;
	
}

bool Stack_PopLL(StackPtr *S){
	bool res = isEmpty(*S);
	if(res == false){
		StackPtr temp;
		temp = *S;
		*S = (*S)->link;
		free(temp);
	}
	return res;
}

int Stack_PeekLL(StackPtr S){
	bool boolean = isEmpty(S);
	int res = -1;
	if(boolean == false){
		res = S->data;
	}
	return res;
	
}

void displayLL(StackPtr S){
	int peek;
	
}
