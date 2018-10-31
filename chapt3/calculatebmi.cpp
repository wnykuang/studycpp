#include <iostream>

int main(){
    using namespace std;
    int feet, inches, pounds;
    const int inchfootfactor = 12;
    const double inchmeterfactor = 0.0254;
    const double poundkmfactor = 2.2;

    cout << "Your heigh in feet:____ \b\b\b\b\b";
    cin >> feet;
    cout << "Your heigh in inches:____\b\b\b\b";
    cin >> inches;
    cout << "You weight in pounds:____\b\b\b\b" ;
    cin >> pounds;
    inches = feet * inchfootfactor + inches;
    double meter = inches * inchmeterfactor;
    double kilograms = pounds / poundkmfactor;
    double bmi = kilograms / (meter * meter);
    cout << "Your BMI is: "<< bmi << "." << endl;
    return 0;
}
