#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int num1, int num2, int num3)
{

    int result;

    if (num1 > num2 && num1 > num3)
    {
        result = num1;
    }
    else if (num2 > num1 && num3 > num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}

int main()
{
    int a = 100;
    int b = 20;

    printf("Max value is: %d\n", max(a, b, 555));

    return 0;
}