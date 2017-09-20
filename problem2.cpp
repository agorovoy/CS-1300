#include <iostream>
#include <math.h>
using namespace std;

double windChillCalculator(double T, double V) {
double windChill;
windChill = 35.74 + 0.6215*T - 35.75*(pow(V,0.16)) + 0.4275*T*(pow(V,0.16));
return windChill;

}

void printWindChill(double T, double lowV, double highV, double stepV) {
    int windSpeed = lowV;
    
    while (windSpeed<=highV)
    {
       cout << "The wind chill is " <<  windChillCalculator(T,windSpeed) << " °F for an air temperature of "<<  T <<"°F"<<" and a wind speed of "<<  windSpeed <<   " mph."      <<   endl;
       windSpeed = windSpeed + stepV;
        
        
        
    }
    
}








int main() {
double temp;
double speed;
double lowSpeed = 5;
double highSpeed = 8;
double stepSpeed = 1;

cout << "Please type air temperature below and press enter when done.\n";
cin >> temp;

cout << "Please type wind speed below and press enter when done.\n";
cin >> speed;


cout << "The wind chill is "   << windChillCalculator(temp, speed)<< " degrees."<<   endl;
//cout << windChillCalculator(temp,speed);

printWindChill(temp, lowSpeed, highSpeed, stepSpeed);







return 0;










}
