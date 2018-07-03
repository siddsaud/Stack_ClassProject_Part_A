#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    const int id;
    float gpa;
    int graduatingYear;
    struct studentNode* next;
} StudentNode;




