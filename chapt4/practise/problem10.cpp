#include <iostream>
#include <array>


int main(){
    using namespace std;
    double* records = new double[3];
    double _s = 0;

    for(int i = 0 ; i < 3; ++i){
        cout << "Please input the " << i+1 <<" \'s record of 40 meter rush.";
        cin >> records[i];
        _s += records[i];
    }
    for(int i = 0; i < 3; ++i){
        cout << "The " << i+1 << " \'s record of 40 meters rush is " << records[i] << " s.\n";
    }
    cout << "The average is " << _s/3 << " sec." << endl;
    delete[] records;
    return 0;
}
