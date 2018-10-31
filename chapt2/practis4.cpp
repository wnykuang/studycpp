#include <iostream>

using namespace std;

int convertMonth(int);

int main(void){
    int ageinyear = 0;
    cout << "Please input your age in year\n" << endl;
    cin >> ageinyear;
    int month = convertMonth(ageinyear);
    cout << "Your are "<< month << " months old." << endl;
    return 0;
}

int convertMonth(int y){
    return y * 12;
}
