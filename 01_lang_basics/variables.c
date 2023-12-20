// VARIABLES
#include <stdio.h>
#include <stdlib.h>


int main()
{
    // if we want to store more than one character, we need to use an array
    char characterName[] = "Manolo";
    int characterAge = 35;

    // %s is a placeholder for a string
    printf("My name is %s\n", characterName);
    printf("I am %d years old\n", characterAge);

    // we can change the value of a variable
    characterAge = 36;
    printf("I am %d years old\n", characterAge);
}