#include <iostream>

int main(){
    using namespace std;
    const int inchFootFactor = 12;
    int inches, feet;
    cout << "Please input your height in inches:______ (inches)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin >> inches;
    feet = inches / inchFootFactor;
    inches = inches % inchFootFactor;
    cout << "Your heigh is "<< feet << " Feet and "<< inches << " inches." << endl;
    return 0;
}
