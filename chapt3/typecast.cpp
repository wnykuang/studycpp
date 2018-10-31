#include <iostream>

int main(){
    using namespace std;
    int auks, bats, boots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99;
    boots = int (19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = "<< bats;
    cout << ", boots = " << boots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}
