#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1); // when scanning a double use %lf
    printf("lfnter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %lf\n", num1 + num2);

    return 0;
}