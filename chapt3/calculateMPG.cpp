#include <iostream>

int main(){
    using namespace std;
    int miles, gallons;
    double mpg;
    cout << "How many miles you have driven?";
    cin >> miles;
    cout << "How many gallons have you used?";
    cin >> gallons;
    mpg = (miles * 1.0)/gallons;
    cout << "The mpg of the car is " << mpg <<" miles per gallon."<<endl;
    return 0;
}
