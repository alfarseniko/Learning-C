#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*int age;
    printf("Enter your age: ");
    scanf("%d", &age); // & is used to tell scanf to store the value from user in the address obtained with &age
    getchar(); // scanf keeps a newline characterin the buffer which is read by the next input so getchar() utilizes that extra character and frees the memory
    printf("Your age is %d\n", age);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name); // array name is itself a pointer, so no need to use &
    getchar();
    printf("Your name is %s\n", name);*/

    // To input a string with spaces
    char fullName[50];
    printf("Enter your full name: ");
    fgets(fullName, 50, stdin);
    printf("Your full name is %s\n", fullName);

    return 0;
}