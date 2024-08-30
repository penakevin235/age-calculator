
#include <stdio.h>
// THIS IS C AND NOT C++


int main(void) {
    int ageInYears;
    int ageInDays;
    double ageInMonths;
    int dayBorn, monthBorn, yearBorn;
    int currentDay, currentMonth, currentYear;



    //asks/input/output birth date info
    printf("Enter your birth date, format dd/mm/yyyy: "); //prints prompt to enter birth date
    scanf("%d %d %d", &dayBorn, &monthBorn, &yearBorn); //asks user input for their date of birth, and inputs it to it's appropriate parameters

    printf("you were born on %d/%d/%d\n", dayBorn,monthBorn,yearBorn); // tells user when they were born



    //asks input/output current date indo
    printf("What's the current date, format dd/mm/yyyy: "); //prompts input for current date
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear); //input for current date

    printf("Current date is %d/%d/%d\n", currentDay,currentMonth,currentYear);// tells user the current day


    //calculates age in years
    ageInYears = currentYear - yearBorn;

    //calculates age in days, while also taking into account leap years
    ageInDays = ageInYears * 365 + (ageInYears/4);

    //Calculates age in months while also taking into account leap years
    ageInMonths = ((ageInYears * 12) + monthBorn);
    //adds leap year accumulation
    ageInMonths = (ageInMonths/48) + ageInMonths;

    printf("You are %d years old,", ageInYears );
    printf(" %d days old", ageInDays);
    printf(" and %.2lf months old", ageInMonths);

    return 0;
}
