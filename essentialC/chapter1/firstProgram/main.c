#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    if (puts("Hello, world!") == EOF) // puts() os succesfully executed because it writes to stdout when called in the if statement
    {
        return EXIT_FAILURE; // EXIT_FAILURE is an object-like macro that commonly expands to 1
        // code here never executes
    }

    // printf("%d\n", EOF); // EOF is returned when a write error occurs in the put method
    // the printf function returns status differently than the puts function.
    // The printf function returns the number of characters printed if it’s successful

    return EXIT_SUCCESS; // EXIT_SUCCESS is an object-like macro that commonly expands to 0
    // code here never executes
}