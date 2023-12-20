// WORKING WITH NUMBERS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("%f\n", 5.0 + 4.5); // also you can do div, mult, sub
    printf("%f\n", 5 + 4.5); // int and float, returns float
    printf("%d\n", 5 / 4); // returns 1, because it's an int
    printf("%f\n", 5 / 4.0); // returns 1.25, because it's a float

    // math functions
    printf("%f\n", pow(2, 3)); // 2 to the power of 3
    printf("%f\n", sqrt(36)); // square root of 36
    printf("%f\n", ceil(36.356)); // round up
    printf("%f\n", floor(36.356)); // round down
}