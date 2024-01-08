#include <stdio.h>

int currentYear = 2020;
#define EXTRA_HOURS_PRICE 60

int main(){
    
    int age = 25;
    int birthYear;
    int extraHoursWorked;
    int hasDoneExtraHours;
    float annualSalary;
    float totalExtraHoursToPay;
    char department;

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("Whats your actual salary?: ");
    scanf("%f", &annualSalary);

    printf("Whats your department?: ");
    scanf(" %c", &department);

    printf("How many extra hours have you worked?: ");
    scanf("%d", &extraHoursWorked);

    birthYear = currentYear - age;
    totalExtraHoursToPay = extraHoursWorked * EXTRA_HOURS_PRICE;

    hasDoneExtraHours = totalExtraHoursToPay;


    return 0;
}