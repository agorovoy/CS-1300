#include <iostream>
using namespace std;

int main () {
    
    int mpg;
    for(;;) {
    cout<< "Please enter your vehicle's mpg below\n";
    cout << "Press enter after\n";
    cin >> mpg;
    if (mpg>50) {
        cout<< "Nice job\n";
    } else if (mpg>=25 && mpg <=49) {
        cout<<"Not great, but okay\n";
    } else  {
        cout<<"So bad, so very, very bad\n";
    }
    }
}
