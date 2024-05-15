#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plular noun: ");
    scanf("%s", pluralNoun);
    getchar();
    printf("Enter a celebrity: ");
    fgets(celebrity, 20, stdin);

    // Mad libs game
    printf("Roses are %s.\n", color);
    printf("%s are blue.\n", pluralNoun);
    printf("I love %s.\n", celebrity);

    return 0;
}