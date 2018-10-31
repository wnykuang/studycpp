#include <iostream>
#include <string>

struct pizza{
    std::string name;
    double diameter;
    double weight;
};

int main(){
    using namespace std;
    pizza* pPizza = new pizza;
    cout << "What size of pizza do you want? (Inch)";
    cin >> pPizza -> diameter;
    cout << "What brand of pizza do you want? ";
    //https://stackoverflow.com/questions/33316564/mixing-cin-and-getline-input-issues
    cin.ignore();
    getline(cin, pPizza -> name);
    cout << "Which weight will you choose? ";
    cin >> pPizza -> weight;

    cout << "Your pizza is ready, ";
    cout << "Hey, man you have bought a " << pPizza -> diameter << " inch pizza which is weight ";
    cout << pPizza -> weight << " pound from " << pPizza -> name << ".\n";
    delete pPizza; 
    return 0;
}
