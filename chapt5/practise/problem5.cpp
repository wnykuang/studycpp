#include <iostream>
#include <string>
const int numberOfMonth = 12;

int main(){
    using namespace std;
    string month[numberOfMonth] = {"Jan", "Feb", "Mar", "Apr","May","Jun" ,"Jul",  "Aug", "Sept", "Oct", "Nov" , "Dec"};
    //int* sell[numberOfMonth];
    int* sell = new int[10];
    int total = 0; 

    for (int idx = 0; idx < numberOfMonth; ++idx ){
        cout << "How many books have you sold in the " << month[idx] << " ?";
        cin >> sell[idx];
    }
    for (int idx = 0; idx < numberOfMonth; ++idx){
        total += sell[idx];
    }
    delete[] sell;
    cout << "The total sell amout is " << total << endl;
    return 0;
}
