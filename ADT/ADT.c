#include<stdio.h>
#include <string.h>
typedef struct{
	char fname[20];
	char lname[20];
}studName;

typedef struct{
	int month;
	int year;
}bday;

typedef struct{
	studName name;
	bday birthdate;
	int age;
	int idNum;
}studentInfo;

typedef struct{
	studentInfo studList[20];
	int studCount;
}classRecord;


void insertFront(classRecord* record, studentInfo newStudent);
void insertRear(classRecord* record, studentInfo newStudent);
void insertIndex(classRecord* record, studentInfo newStudent, int position);
void insertSorted(classRecord* record, studentInfo newStudent);
void deleteFirst(classRecord* record);
void deleteLast(classRecord* record);
void deleteAtIndex(classRecord* record, int position);

int main() {
    // Initialize classrecords
    classRecord myClass;
    myClass.studCount = 0; // Initialize studentcount
	int i;
    // sampledata
    studentInfo student1 = { .name = { "nathan", "rama" }, .birthdate = { 5, 2000 }, .age = 21, .idNum = 01 };
    studentInfo student2 = { .name = { "miguel", "perez" }, .birthdate = { 8, 1999 }, .age = 22, .idNum = 02 };
    studentInfo student3 = { .name = { "leo", "rojas" }, .birthdate = { 10, 2001 }, .age = 20, .idNum = 03 };
	studentInfo student4 = { .name = { "josh", "ababbon" }, .birthdate = { 10, 2001 }, .age = 20, .idNum = 04 };
	
    // insertusingfunscions
    
    insertIndex(&myClass, student4, 0);
    insertRear(&myClass, student3);
    insertSortedByAge(&myClass,student2);
    insertFront(&myClass, student1);
	deleteFirst(&myClass);

    //print
    printf("Class Record:\n");
    for (i = 0; i < myClass.studCount; i++) {
        printf("Student %d: %s %s (ID: %d) Age: %d\n", i + 1, myClass.studList[i].name.fname, myClass.studList[i].name.lname, myClass.studList[i].idNum, myClass.studList[i].age);
    }

    return 0;
}

void insertFront(classRecord* record, studentInfo newStudent) {
	
	int i;
    if (record->studCount < 20) {

        for (i = record->studCount; i > 0; i--) {
            record->studList[i] = record->studList[i - 1];
        }
 
        record->studList[0] = newStudent;
        record->studCount++;
    } else {
        printf("Classfull\n");
    }
}

void insertRear(classRecord* record, studentInfo newStudent) {
    if (record->studCount < 20) {
        record->studList[record->studCount] = newStudent;
        record->studCount++;
    } else {
        printf("Classfull\n");
    }
}


void insertIndex(classRecord* record, studentInfo newStudent, int position) {
	int i;
    if (position < 0 || position > record->studCount) {
        printf("Invalid pos\n");
        return;
    }

    if (record->studCount >= 20) {
        printf("Classfull\n");
        return;
    }


    for (i = record->studCount; i > position; i--) {
        record->studList[i] = record->studList[i - 1];
    }


    record->studList[position] = newStudent;
    record->studCount++;
}



void insertSortedByAge(classRecord* record, studentInfo newStudent) {
    int i, j;
    for (i = 0; i < record->studCount; i++) {
        if (newStudent.age < record->studList[i].age) {
            //shiftelemetns
            for (j = record->studCount; j > i; j--) {
                record->studList[j] = record->studList[j - 1];
            }
            record->studList[i] = newStudent;
            record->studCount++;
            return; 
        }
    }
   //if student has highest age add at end
    record->studList[record->studCount] = newStudent;
    record->studCount++;

   //used insertion sort
    for (i = 1; i < record->studCount; i++) {
        studentInfo key = record->studList[i];
        j = i - 1;
        while (j >= 0 && record->studList[j].age > key.age) {
            record->studList[j + 1] = record->studList[j];
            j--;
        }
        record->studList[j + 1] = key;
    }
}




void deleteFirst(classRecord* record) {
     int i;
	if (record->studCount == 0) {
        printf("no students\n");
        return;
    }


    for (i = 0; i < record->studCount - 1; i++) {
        record->studList[i] = record->studList[i + 1];
    }

    record->studCount--;
}

void deleteLast(classRecord* record) {
    if (record->studCount == 0) {
        printf("no students\n");
        return;
    }

    record->studCount--;
}

void deleteAtIndex(classRecord* record, int position) {
    int i;
	if (position < 0 || position >= record->studCount) {
        printf("invalid pos\n");
        return;
    }

   
    for (i = position; i < record->studCount - 1; i++) {
        record->studList[i] = record->studList[i + 1];
    }

    record->studCount--;
}





