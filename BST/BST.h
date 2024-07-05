#ifndef BST
#define BST

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct{
	int day,month,year;
}Date;

typedef struct{
	char prodName[20];
	float prodPrice;
	int prodQty;
	Date expDate;
}Product;

typedef struct node{
	Product item;
	struct node *lft, *right;
}NodeType, *NodePtr;




#endif
