#include <iostream>
const int arrSize = 10;
int main(){
    using namespace std;
    cout << "The amazing function will count and calculate the sum." << endl;
    cout << "five numbers for you: " << endl;
    cout << "Please input 5 numbers: " << endl;
    double number = 0;
    double* ls = new double[arrSize];
    for (int idx = 0; idx < 10; ++idx){
        cout << "Please input the " << idx+1 << " number.";
        cin >> ls[idx];

    }
    for (int idx = 0; idx < 10; ++idx){
        number += ls[idx];
    }
    cout << "The average value of all your input is: "<< number/arrSize <<endl;
    delete[] ls; 
    return 0;
}
