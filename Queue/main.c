#include <stdio.h>
#include <stdlib.h>
#include "QueueLinked.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Queue Head;
	int fres;
	int rres;
	initialize(&Head);
	eQ(&Head, 3);
	eQ(&Head, 5);
	eQ(&Head, 9);
	eQ(&Head, 23);
	eQ(&Head, 14);
	eQ(&Head, 6);
	deQ(&Head);
	deQ(&Head);
	fres = Front(Head);
	rres = Rear(Head);
	printf("%d\n", fres);
	printf("%d\n", rres);
	display(Head);
	
	return 0;
}
