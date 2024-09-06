#include <iostream>
using namespace std;
//THIS IS C++ NOT C

int main() {
    int ageInYears;
    int ageInDays;
    double ageInMonths;
    int dayBorn, monthBorn, yearBorn;
    int currentDay, currentMonth, currentYear;

    //endl; does the same thing as \n . cout outputs to the terminal
    cout << "enter birth date in the formal dd/mm/yyyy" << endl;

    //cin allows you to input things into the program
    cin >> dayBorn >> monthBorn >> yearBorn; 
    
    //unlike C, C++ doesnt need %d for integers or %lf for doubles
    cout << "You were born on " << dayBorn << "/" << monthBorn << "/" << yearBorn << endl;

    cout << "What's the current date in format dd/mm/yyyy" << endl;
    cin >> currentDay >> currentMonth >> currentYear;
    cout << "Todays date is " << currentDay << "/" << currentMonth << "/" << currentYear << endl;

    ageInYears = currentYear - yearBorn;

    ageInDays = ageInYears * 365 + (ageInYears/4);

    ageInMonths = (ageInYears * 12) + monthBorn;
    ageInMonths = (ageInMonths/48) + ageInMonths;


    cout << "You are " << ageInYears << " years old, " << ageInDays << " days old, and " << ageInMonths << " months old " << endl;


    return 0;
} 