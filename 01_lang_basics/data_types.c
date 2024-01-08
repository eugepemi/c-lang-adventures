// DATA TYPES
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Numbers
    int age = 35;
    float gpa = 3.6;   // decimal numbers
    double gpa2 = 3.6; // decimal numbers with more precision

    // Characters
    char grade = 'A'; // single character

    // This is not technicaly a data type, but it's a way to store a sequence of characters
    char phrase[] = "El Andrew"; // array of characters

    /*
    As convention 1 is true, 0 is false, in reality 0 will be interpreted as false
    and every other value as true
    */
    int isMale = 1; // 1 = true, 0 = false

    // Type conversion
    float rate = 4.01;
    int rateWithoutDec = (int)rate;

    /*
    TYPE MODIFIERS
    unsigned - only positive numbers
    short - half the size of an int
    long - double the size of an int
    */

    // F.e. we have a postal code, we know it will be a positive number, so we can use unsigned, and
    // we know it will be a small number, so we can use short
    unsigned short postalCode = 12345;

   
}