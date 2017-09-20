#include <iostream>
#include <math.h>
using namespace std;

float windChillCalculator(float T, float V) {
float windChill;
windChill = 35.74 + 0.6215*T - 35.75*(pow(V,0.16)) + 0.4275*T*(pow(V,0.16));
return windChill;

}

void printWindChill(float T, float lowV, float highV, float stepV) {
    int windSpeed = lowV;
    
    while (windSpeed<=highV)
    {
       cout << "The wind chill is " <<  windChillCalculator(T,windSpeed) << " °F for an air temperature of "<<  T <<"°F"<<" and a wind speed of "<<  windSpeed <<   " mph."      <<   endl;
       windSpeed = windSpeed + stepV;
        
        
        
    }
    
}








int main() {
float temp;
float speed;
float lowSpeed = 5;
float highSpeed = 8;
float stepSpeed = 1;

cout << "Please type air temperature below and press enter when done.\n";
cin >> temp;

cout << "Please type wind speed below and press enter when done.\n";
cin >> speed;


cout << "The wind chill is "   << windChillCalculator(temp, speed)<< " degrees."<<   endl;
//cout << windChillCalculator(temp,speed);

printWindChill(temp, lowSpeed, highSpeed, stepSpeed);







return 0;










}
