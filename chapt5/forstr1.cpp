#include <iostream>
#include <string>
int main(){
    using namespace std;
    cout << "Enter a string: ";
    string inpt;
    getline(cin, inpt);
    for (int idx = inpt.size() - 1; idx >= 0; --idx){
        cout << inpt[idx];
    }
    cout << "\n"; 
    return 0;
}
