// Author: Andrew Gorovoy
// Recitation: Thomas Lillis
//
// Assignment 2

#include <iostream>

using namespace std;

/*
 * Algorithm projects population in one year
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
 * Algorithm takes seconds value and presents in x days, y hours, z minutes, and t seconds
 * Int variables to represent whole numbers
 * Used modulo to get seconds left over from previous divsion, and then divided by next value to get hours, minutes
 * For seconds, no division was necessary becuase modulo gave leftover seconds, and int variable displayed whole number
 *Returned nothing
 */
void howLong(int seconds) {
    int days;
    int hours;
    int minutes;
    float leftovers;
    if ((seconds != 86400)&&(seconds!=0)) {
    days = seconds/86400;
    hours = (seconds%86400)/3600;
    minutes=((seconds%86400)%3600)/60;
    leftovers = (((seconds%86400)%3600)%60);
    } else if (seconds == 86400) {
        days = 1;
        hours = 0;
        minutes = 0;
        leftovers = 0;
    } else {
        days = 0;
        hours = 0;
        minutes = 0;
        leftovers = 0;
    }

    
    
    // "Time   is   1   days,   2   hours,   10   minutes,   and   5   seconds."      <<   endl;
    cout << "Time is " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << leftovers << " seconds." << endl;
    
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
    float sec = 95678;
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
