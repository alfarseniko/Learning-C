#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num = 5;
    printf("%d\n", num);

    const int _NUM = 10; // cannot be changed
    printf("This is a constant number = %d\n", _NUM);

    return 0;
}