#include "StackArray.h"

void initStack(StackArrayList *S){
	S->top = 0;
}

StackArrayList createStack(){
	StackArrayList S = {.top = 0};
	return S;
}

bool isEmpty(StackArrayList S){
	bool boolean = false;
	if(S.top == 0){
		boolean = true;
	}
	return boolean;
}

bool isFull(StackArrayList S){
	bool boolean = false;
	if(S.top == MAX){
		boolean = true;
	}
	return boolean;
}

bool Stack_Push(StackArrayList *S, int elem){
	bool boolean;
	boolean = isFull(*S);
	if(boolean == false){
		S->data[S->top] = elem;
		S->top++;
	}
	else{
		bool boolean = true;
	}
	return boolean;
}	

bool Stack_Pop(StackArrayList *S){
	bool boolean;
	boolean = isEmpty(*S);
	if(boolean == false){
		S->top--;
	}
	else{
		boolean = true;
	}
	return boolean;
}

int Stack_Peek(StackArrayList S){
	bool boolean = isEmpty(S);
	int val;
	if(boolean == false){
		val = S.data[S.top-1];
	}
	else{
		val = -1;
	}
	return val;
}

void display(StackArrayList S){
	int i;
	bool res;
	for(i = S.top-1; i >= 0; i--){
		printf("%d \n", S.data[i]);
		res = Stack_Pop(&S);
	}
}

void visualize(StackArrayList S){
	int i;
	printf("index | val\n");
	for(i = 0; i < S.top; i++){
		printf("%-5d | %d\n", i, S.data[i]);
	}
}

StackArrayList Get_Even(StackArrayList *S){
	
}
