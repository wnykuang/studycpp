#include <iostream>
bool isNum(double);

int main(){
    using namespace std;
    double num;
    cout << "Yo , dude! Enter an integer value!";
    cin >> num;
    while(!isNum(num)){
        cout << "Please enter an integer value!";
        cin >> num;
    }
    int val = int(num); //type cast
    cout << "You have enter the ingeger value: " << val << endl;
    cout << "Bye!";
    return 0;
}

bool isNum(double x){
    if (x < INT_MIN || x > INT_MAX)
        return false;
    else
        return true;

}
