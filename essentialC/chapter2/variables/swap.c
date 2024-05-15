// Objects are storage in which you can store data

#include <stdio.h>
#include <stdlib.h>

void swap(int, int); // function prototype, lets the compiler know that such a function exists as it runs sequentially

int main(void)
{
    int a = 17;
    int b = 31;

    swap(a, b);

    // if a and b are used globally, they will have the same value as defined in the global block

    return EXIT_SUCCESS;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d\n", a, b);
    // Here a and b have been swapped locally
}