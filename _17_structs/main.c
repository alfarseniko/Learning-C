#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");       // cannot directly assign a astring to char[]
    strcpy(student1.major, "Business"); // use strcpy with 2 parameters

    return 0;
}
