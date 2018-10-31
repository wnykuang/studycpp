#include <iostream>

int main(){
    using namespace std;
    int updates = 6;
    int * pUpdates;
    pUpdates = &updates;

    //express the value in two methods.
    cout << "Value of updates is: " << updates << endl;
    cout << "Also from the defrenencing operator.  " << * pUpdates <<endl;

    cout << "Value of the address of updates: " << &updates << endl;
    cout << "Also from the raw pointer: " << pUpdates << endl;

    cout << "Using address to update the value. " << endl;
    *pUpdates = *pUpdates + 1;
    cout << *pUpdates << '\n';
    return 0;
}
