#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Hello World\n");                                      // print a string
    printf("Hello %s\n", "World");                                // print a string with a placeholder
    printf("My favorite number is %d\n", 500);                    // print an integer
    printf("My favorite %s is %d\n", "number", 500);              // print a string and an integer
    printf("My favorite %s is %f\n", "number", 500.234350345345); // print a string and a float

    return 0;
}