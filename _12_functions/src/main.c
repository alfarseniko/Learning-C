#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi(char name[], int age)
{
    printf("Hello %s! You are %d years old!\n", name, age);
}

int main()
{
    sayHi("Nike", 25);
    return 0;
}
