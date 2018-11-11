#include <fstream>
#include <iostream>

int main(){
    using namespace std;
    char automobile[50];
    int year;
    double aPrice;
    double dPrice;
    ofstream outFile;
    outFile.open("carinfo.txt");
    cout << "Enter the maker and modle of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year";
    cin >> year;
    cout << "Enter the original ask price: ";
    cin >> aPrice;
    dPrice = 0.913 * aPrice;
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was ask for $ " << aPrice << endl;
    cout << "Now asking for $ " << dPrice << endl;
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was ask for $ " << aPrice << endl;
    outFile << "Now asking for $ " << dPrice << endl;

    outFile.close();
    return 0;
}
