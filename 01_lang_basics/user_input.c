/*
USER INPUT
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age); // & is the address operator, a pointer to the variable
    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); // %lf for double
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade); // Add a space before %c to consume any whitespace characters
    printf("Your grade is %c\n", grade);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name); // %s for string
    printf("Your name is %s\n", name);
    /*
    The problem that we have here is that scanf() will stop reading as 
    soon as it finds a space.
    */

    char fullName[20];
    printf("Enter your full name: ");
    fgets(fullName, 20, stdin); // fgets() will read the whole line, stdin is the standard input   
    printf("Your full name is %s\n", fullName);

    return 0;
}