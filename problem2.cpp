//   Author:   Andrew Gorovoy
//   Recitation:   ECCR 155 –   Thomas Lillis
//   Assignment   3
#include <iostream>
#include <math.h>

using namespace std;
/*
This function takes two float parameters: temperature and windspeed
Input parameters into the equation to get windchill
Return windchill as a float
*/

float windChillCalculator(float T, float V) {
    float windChill;
    windChill = 35.74 + 0.6215*T - 35.75*(pow(V,0.16)) + 0.4275*T*(pow(V,0.16));
    return windChill;
}

/*
This function takes four float parameters: temp, low windspeed, high windspeed, step speed
displays windchill by calling windChillCalculator function
This display is in a while loop and will display windchill for every change in windspeed based on step speed until windspeed equals high windspeed, and while loop ends
return nothing
*/


void printWindChill(float T, float lowV, float highV, float stepV)
{
    float windSpeed = lowV;

    while (windSpeed<=highV)
    {
       cout << "The wind chill is " <<  windChillCalculator(T,windSpeed) << " degrees F for an air temperature of "<<  T <<" degrees F"<<" and a wind speed of "<<  windSpeed <<   " mph."      <<   endl;
       windSpeed = windSpeed + stepV;

    }

}

/*
recieve inputs for windChillCalculator function
call printWindChill function
*/

int main(){
float temp;
float speed;
float lowSpeed = 5;
float highSpeed = 8;
float stepSpeed = 1;

cout << "Please type air temperature below and press enter when done.\n";
cin >> temp;

cout << "Please type wind speed below and press enter when done.\n";
cin >> speed;

cout << "The wind chill is "  << windChillCalculator(temp, speed)<< " degrees."<<   endl;
printWindChill(temp, lowSpeed, highSpeed, stepSpeed);



}
