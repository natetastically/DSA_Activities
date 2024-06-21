#include "Sets.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Set set1 = {{1 , 2 , 3 }, 3};
	Set set2 = {{1 , 2 , 3 , 4}, 4};
	
	printf("%d", set1.elements[0]);
	
	
//	Set unionResult = findUnion(set1, set2);
	Set intersectResult = findIntersection(set1 , set2);
	
	int i;
	
	 printf("Intersection: ");
    for (i = 0; i < intersectResult.size; i++) {
        printf("%d ", intersectResult.elements[i]);
    }
    printf("\n");
	
	return 0;
}
