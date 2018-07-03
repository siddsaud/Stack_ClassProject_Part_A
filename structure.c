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
bool checkUniqueID(student_t*, int);
void printAll(student_t*);
void exitStack();
void instructions();
void printTop(student_t*);
void printStudent(student_t*);

int main(){
    // Bhavay
    instructions();
    student_t* head=NULL;
    int choice;
    while(choice!=5){
        switch(choice){
            case 1:
                printTop(head);
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
    if(top==NULL){
        printf("empty stack");
        return;
    }
    printStudent(top);
    

}

student_t* pop(student_t* top){

    if (top == NULL) {

        return NULL;
    }

    printStudent(top);

    student_t* popped = top;

    top = top->next;

    free(popped);

    return top;
}

student_t* push(student_t* top){
    // saud
}

bool checkUniqueID(student_t* head, int id){

    // James
    student_t* current=head;
    while(current->next!=NULL){
        if(head->id == id){
            return false;
        }
        current=current->next;
    }
    return true;
}

void printAll(student_t* top){
    // Bhavay
    student_t* current=top;
    while(current->next!=NULL){
        printStudent(current);
        current=current->next;
    }
}

void exitStack(student_t* top){
    student_t* current=top;
    while(current->next!=NULL){
        pop(current);
    }
    free(current);
    // Bhavay
    printf("Exites the application");
    exit(0);

}


void instructions() {
	printf("Enter choice:\n1 Top\n2 Push\n3 Pop\n4 Print \n5 Exit Stack Application");
}

void printStudent(student_t* student){
    printf("\nid: %d\tname: %s\tGrad. Year: %d\t GPA: %lf\tProgram Name: %s\tSchool Name: %s\n", 
    student->id, student->name, student->graduatingYear, student->gpa,student->programName, student->schoolName);
}