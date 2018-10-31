#include <iostream>

int main(){
    using namespace std;
    unsigned long long uspop, worldpop;
    double porp;
    cout << "Enter the world's population:";
    cin >> worldpop;
    cout << "Enter the population of the US:";
    cin >> uspop;
    porp = (uspop * 100.0)/worldpop;
    cout << "The population of the US is " << porp << "% of the world population. "<< endl;
    return 0;
}
