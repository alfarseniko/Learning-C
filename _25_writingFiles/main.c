#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("employees.txt", "w"); // use "a" to append to the file

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accountant\n");

    // fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer); // Close the file (good practice

    return 0;
}