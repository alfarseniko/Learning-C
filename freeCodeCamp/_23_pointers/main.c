#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A memory address is just like another data type

    int age = 30;
    int *pAge = &age;

    double gpa = 3.4;
    double *pGpa = &gpa;

    char grade = 'A';
    char *pGrade = &grade;

    printf("The memory address of age is: %p\n%p\n%p\n", pAge, pGpa, pGrade);

    return 0;
}