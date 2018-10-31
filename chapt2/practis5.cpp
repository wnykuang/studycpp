#include <iostream>

double CtoF(double);

int
main(void){
    using namespace std;
    cout << "Please enter a Celsius value:" << endl;
    double celsius = -20;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << CtoF(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

double
CtoF(double C){
    return (1.8 * C) + 32;
}
