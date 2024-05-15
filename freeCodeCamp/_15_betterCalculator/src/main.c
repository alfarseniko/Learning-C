#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1); // %lf for double in scanf
    printf("Enter operator: ");
    scanf(" %c", &op); // put a space before %c to ignore the newline character
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%f\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%f\n", num1 * num2);
    }
    else if (op == '/')
    {
        printf("%f\n", num1 / num2);
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}