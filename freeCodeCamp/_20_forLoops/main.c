#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}