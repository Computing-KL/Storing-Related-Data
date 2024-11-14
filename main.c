#include <stdio.h>
#include <string.h>

#include "main.h"

// Struct to represent a student
typedef struct Student {
    char name[20];
    int id;
} Student;

int main(void) {
    printf("Using Parallel Arrays\n");
    ParallelExample();

    printf("Using Structs\n");
    StructExample();

    return 0;
}

// Example of storing related data using Parallel arrays
void ParallelExample(void) {
    // Create arrays
    char names[5][20];
    int ids[5];

    // Assign values
    strcpy_s(names[0], 20, "Student 1");
    ids[0] = 111111;

    strcpy_s(names[1], 20, "Student 2");
    ids[1] = 222222;

    strcpy_s(names[2], 20, "Student 3");
    ids[2] = 333333;

    strcpy_s(names[3], 20, "Student 4");
    ids[3] = 444444;

    strcpy_s(names[4], 20,"Student 5");
    ids[4] = 555555;

    // Display Values
    for(int i = 0; i < 5; i++) {
        printf("%d is called %s\n", ids[i], names[i]);
    }
}

// Example of storing related data using a Struct array
void StructExample(void) {
    // Create array of structs
    Student students[5];

    // Assign Values
    strcpy_s(students[0].name, 20, "Student 1");
    students[0].id = 111111;

    strcpy_s(students[1].name, 20, "Student 2");
    students[1].id = 222222;

    strcpy_s(students[2].name, 20, "Student 3");
    students[2].id = 333333;

    strcpy_s(students[3].name, 20, "Student 4");
    students[3].id = 444444;

    strcpy_s(students[4].name, 20, "Student 5");
    students[4].id = 555555;

    // Display Values
    for(int i = 0; i < 5; i++) {
        printf("%d is called %s\n", students[i].id, students[i].name);
    }
}