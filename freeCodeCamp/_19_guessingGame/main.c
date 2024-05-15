#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretnumber = 69;
    int guess = 0;
    int guesscount = 0;
    int guesslimit = 5;
    int outOfGuesses = 0;

    while (guess != secretnumber && outOfGuesses == 0)
    {
        if (guesscount < guesslimit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            outOfGuesses = 1;
        }
    }

    if (outOfGuesses == 1)
    {
        printf("You Lost! \n");
    }
    else
    {
        printf("You Win!\n");
    }

    return 0;
}