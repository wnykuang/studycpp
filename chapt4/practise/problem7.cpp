#include <iostream>
#include <string>

struct pizza{
    std::string name;
    double diameter;
    double weight;
};

int main(){
    pizza aPizza;
    using namespace std;
    cout << "Please enter the brand name of the pizza: ";
    getline(cin, aPizza.name);
    cout << "Please enter the diameter of the pizza: ";
    cin >> aPizza.diameter;
    cout << "Please enter the weight of the pizza: ";
    cin >> aPizza.weight;
    cout << "Hey, man you have bought a " << aPizza.diameter << " inch pizza which is weight ";
    cout << aPizza.weight << " pound from " << aPizza.name << ".\n";
    return 0;
}
