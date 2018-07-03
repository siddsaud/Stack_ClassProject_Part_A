#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

// prototypes
student_t* pop(student_t*);
student_t* push(student_t*);
bool checkUniqueID(int);
void printAll(student_t*);
void exitStack();
void instructions();
void printTop(student_t*);


int main(){
    // Bhavay
    instructions();
    student_t* head=NULL;
    int choice;
    while(choice!=5){
        switch(choice){
            case 1:
                printTop();
                break;
            case 2:
                head=push(head);
                break;
            case 3:
                head=pop(head);
                break;
            case 4:
                printAll(head);
                break;
            default:
                printf("Invalis input! Please try again! \n");
                break;
        }
    }
}

void printTop(student_t* top){

}
student_t* pop(student_t* top){
    // Nathaniel
}

student_t* push(student_t* top){
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
