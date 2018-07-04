/*
 * * Group Members:
 * *    - James Grau
 * *    - Bhavay Grover
 * *    - Nathaniel Primo
 * *    - Saud Siddiqui
 * * File Name: Stack_ClassProject_Part_A/structure.c
 * * Assignment: Final_Project
 * * Creation date: 7/3/2018
 * * Last Modified: 7/4/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FLUSH freopen(NULL, "r", stdin);

// Initialize a student structure
typedef struct node {

    // Declare the needed structure items
    int id;
    char *name;
    char *schoolName;
    char *programName;
    int graduatingYear;
    float gpa;
    struct node *next;
} student_t;

// prototypes
void *pop(student_t *);

void *push(student_t *);

void *printAll(student_t *);

void *exitStack(student_t *top);

void *printTop(student_t *);

void *printStudent(student_t *);

bool checkUniqueID(student_t *, int);

void instructions();

/// The main execution point of the program
/// \return If the execution a success or not
/// \authors Bhavay, Nathaniel
int main() {

    // Stores all functions used in the program
    void *(*methods[])(student_t *) = {printTop, push, pop, printAll, exitStack};

    student_t *head = NULL;
    int choice;

    while (true) {

        instructions();

        FLUSH;

        // Determines if the user entered a valid number between 1 and 5 while getting the input from stdin
        if (scanf("%d", &choice) && choice >= 1 && choice <= 5) {


            // Retrieves the correct function to execute from the array
            student_t *result = (student_t *) (*methods[choice - 1])(head);

            // Determines if the head needs to be updated based on if the return was NULL
            if (result) {

                head = result;
            }
        } else {

            printf("Invalid entry, try again\n");
        }
    }
}

/// Prints the top-most node in the linked-list
/// \param top The first node of the linked-list
void *printTop(student_t *top) {

    if (top == NULL) {
        printf("empty stack");
        return NULL;
    }
    printStudent(top);

    return NULL;
}

/// Removes and prints the top-most node in the linked-list
/// \param top The first node of the linked-list
/// \return The current top node of the linked-list
/// \author Nathaniel
void *pop(student_t *top) {

    if (top == NULL) {

        return NULL;
    }

    printStudent(top);

    student_t *popped = top;

    top = top->next;

    if (popped->name) {

        free(popped->name);
    }
    if (popped->schoolName) {

        free(popped->schoolName);
    }
    if (popped->programName) {

        free(popped->programName);
    }

    free(popped);

    return top;
}

void *push(student_t *top) {
    // saud
}

/// Checks if a given id already exist in the given stack
/// \param head The first node of the linked-list
/// \param id The desired id to check against
/// \return If the given id was not present in the stack
bool checkUniqueID(student_t *head, int id) {

    student_t *current = head;
    while (current->next != NULL) {
        if (head->id == id) {
            return false;
        }
        current = current->next;
    }
    return true;
}

/// Prints each student in a giving linked-list
/// \param top The first node of the linked-list
/// \author Bhavay
void *printAll(student_t *top) {

    student_t *current = top;
    while (current->next != NULL) {
        printStudent(current);
        current = current->next;
    }

    return NULL;
}

/// Cleans the linked-list and exits the the programs
/// \param top
void *exitStack(student_t *top) {
    student_t *current = top;
    while (current->next != NULL) {
        pop(current);
    }
    free(current);
    // Bhavay
    printf("Exites the application");
    exit(0);
}

/// Prints the current user choices
void instructions() {
    printf("Enter choice:\n1 Top\n2 Push\n3 Pop\n4 Print \n5 Exit Stack Application");
}

/// Prints a single student
/// \param student The desired student to be printed
void *printStudent(student_t *student) {
    printf("\nid: %d\tname: %s\tGrad. Year: %d\t GPA: %lf\tProgram Name: %s\tSchool Name: %s\n",
           student->id, student->name, student->graduatingYear, student->gpa, student->programName,
           student->schoolName);

    return NULL;
}