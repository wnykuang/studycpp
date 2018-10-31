#include <iostream>

int main(){
    using namespace std;
    cout << "What year your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is your street address? \n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address is: "<< address << endl;
    return 0;
}
