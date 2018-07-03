#include <stdio.h>
#include <stdlib.h>

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


int main(){


}


void instructions(void) {
	printf("Enter choice:\n1 Top\n2 Push\n3 Pop\n4 Print \n5 Exit Stack Application");
}
