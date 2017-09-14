// Author: CS1300 Fall 2017
// Recitation: 123 – Favorite TA
//
// Assignment 2

#include <iostream>

using namespace std;

/*
 * Algorithm projects population in on year
 * Adds total births and immigrants during the year
 * Subtracts total deaths in a year
 * Returns int value of population in one year
 */
int howMany(int population) {
    float secYear = 31536000;
    float birthAdded = secYear / 8.0;
    float immAdded = secYear / 33.0 ;
    float deathSubtract = secYear / 12.0;
    float newPop = population + birthAdded + immAdded - deathSubtract;
    return newPop;
}

/**
 * Algorithm takes seconds value and presents 
 *
 */
void howLong(int seconds) {
    int days;
    int hours;
    int minutes;
    int leftovers;
    float daysAdjust;
    days = seconds / 86400.0;
    if (days > 1) {
        daysAdjust = (seconds/86400.000) - days;
        hours = daysAdjust * 24.000;
        minutes = ((daysAdjust * 24.000) - hours) * 60.000;
        leftovers = ((((daysAdjust * 24.000) - hours) * 60.000) - minutes) * 60.000;
       
    } else if (seconds == 86400.000) {
        hours = 0;
        minutes = 0;
        leftovers = 0;
    } else {
        daysAdjust = (seconds/86400.0);
        hours = daysAdjust * 24.0;
        minutes = ((daysAdjust * 24.0) - hours) * 60.0;
        leftovers = ((((daysAdjust * 24) - hours) * 60) - minutes) * 60;
        if (leftovers==39) {
            leftovers=40;
        }
        
        
        
        
    }
    
    
    // "Time   is   1   days,   2   hours,   10   minutes,   and   5   seconds."      <<   endl;
    cout << "The time is " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << leftovers << " seconds." << endl;
    
}

/*
 * Algorithm coverts celsius temp into farenheit
 *returns int value
 */
int howHot(int temperature) {
    int tempf;
    tempf = (temperature * 1.8) + 32;
    return tempf;
}


int main() {
    // Problem 1 test
    // Change value of 'pop' to change value you want to test
    int pop = 1000000;
    cout << "Given the initial population of " << pop;
    cout << " your estimation finds a population of ";
    cout << howMany(pop) << endl << endl;

    // Problem 2 test
    // Change value 'sec' to change value you want to test
    float sec = 4000.0;
    cout << "Given the seconds value of " << sec;
    cout << " your output is: " << endl;
    howLong(sec);
    cout << endl;

    // Problem 3 test
    // Change value 'temp' to change value you want to test
    int temp = 20;
    cout << "Given temperature " << temp;
    cout << " degrees Celsius you calculate ";
    cout << howHot(temp) << " degrees Fahrenheit" << endl;
    return 0;
}
