#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    /*
    printf("%d\n", nums[1][2]); // modulo magic to increase the left index
    printf("%d\n", nums[2][0]); // basically both are same
    */

    return 0;
}