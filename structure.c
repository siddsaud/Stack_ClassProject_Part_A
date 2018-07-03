#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// prototypes


// Initialize a student structure
typedef struct node {
// Declare the needed structure items
    int id;
    char *name;
    char *schoolName;
    char *programName;
    int graduatingYear;
    float gpa;
    struct node* next;
} student_t;


student_t pop(student_t*);
student_t push(student_t*);
bool checkUniqueID(int);
void printAll(student_t*);
void exitStack();
void instructions();


int main(){
    // Bhavay

}

student_t pop(student_t* top){
    // Nathaniel
}

student_t push(student_t* top){
    // saud
}

bool checkUniqueID(int id){
    // James

}

void printAll(student_t* top){
    // Bhavay
}

void exitStack(){
    // Bhavay

}


void instructions() {
	printf("Enter choice:\n1 Top\n2 Push\n3 Pop\n4 Print \n5 Exit Stack Application");
}
