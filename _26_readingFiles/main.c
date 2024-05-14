#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255]; // Create a char array to store the line

    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); // Read the first line of the file
    printf("%s", line);         // Print the first line
    fgets(line, 255, fpointer); // Read the first line of the file
    printf("%s", line);         // Print the first line

    fclose(fpointer); // Close the file (good practice)

    return 0;
}