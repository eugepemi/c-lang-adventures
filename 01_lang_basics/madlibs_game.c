#include <stdio.h>
#include <stdint.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityFirstName[20];
    char celebrityLastName[20];

    printf("Enter a color: ");
    scanf("%s", color); // when we read in a string, we don't need the &, TODO why?
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityFirstName, celebrityLastName); // we can read in multiple strings at once

    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityFirstName, celebrityLastName);
}
