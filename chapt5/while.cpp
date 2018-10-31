#include <iostream>
const int arrSize = 20;
int main(){
    using namespace std;
    char name[arrSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name with corresponding ASCII code: \n";
    int idx = 0;
    //while (name[idx] != '\0'){
    while(name[idx]){
        cout << name[idx] << " : " << int(name[idx]) << endl;
        ++idx;
    }
    return 0;
}

