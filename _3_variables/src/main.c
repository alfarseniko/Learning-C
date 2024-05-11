#include <stdio.h>
#include <stdlib.h>

int main()
{
    char _name[] = "John"; // use [] for an array of characters
                           // use double quotes (for some reason)

    int _age = 22; // use int for integers

    printf("Hello World! \nMy name is %s! \n", _name); // use %s for strings
    printf("I am %d years old! \n", _age);             // use %d for integers

    _age = 50;
    printf("But now he is %d \n", _age);

    return 0;
}