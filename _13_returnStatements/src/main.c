#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num);

int main()
{
    printf("The cube of %f is %f.\n", 12.000, cube(12));
    return 0;
}

double cube(double num)
{
    return num * num * num;
}