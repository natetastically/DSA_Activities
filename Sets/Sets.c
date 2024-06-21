#include "Sets.h"


void addToSet(Set* set, int element) {
    if (set->size < MAX) {
        set->elements[set->size++] = element;
    }
}

//Set findUnion(Set set1, Set set2){
//	
//	struct Set unionSet;
//    unionSet.size = 0;
//
//    for (int i = 0; i < set1.size; i++) {
//        addToSet(&unionSet, set1.elements[i]);
//    }
//
//    for (int i = 0; i < set2.size; i++) {
//        addToSet(&unionSet, set2.elements[i]);
//    }
//
//    return unionSet;
//}

Set findIntersection(Set set1, Set set2){
	
	Set intersectionSet;
    intersectionSet.size = 0;
	
	int i , j ;
    for (i = 0; i < set1.size; i++) {
        for (j = 0; j < set2.size; j++) {
            if (set1.elements[i] == set2.elements[j]) {
                addToSet(&intersectionSet, set1.elements[i]);
                break;
            }
        }
    }

    return intersectionSet;
}
