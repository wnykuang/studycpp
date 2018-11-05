#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; Enter # to quit:\n";
    cin >> ch;//get the first char
    while (ch!='#'){
        cout << ch;
        ++count;
        cin >>ch;// get the next char

    }
    cout << endl << cout << cout << " characters read in." << endl;
    return 0;

}
