#include <iostream>
#include <string>
#include <cstring>

int main(){
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of the string in charr before input:"
    << strlen(charr) << endl;
    cout << "Length of the string in str before input:"
        << str.size() << endl;
    cout << "Enter a line of string" << endl;
    cin.getline(charr , 20);
    cout << "You enter " << charr << endl;
    cout << "Enter another line of string: " << endl;
    getline(cin, str);
    cout << "You enter " << str << endl;
    cout << "Length of string in charr is: " << strlen(charr) << endl;
    cout << "Length of string in str is: " << str.size() << endl;

    return 0;
}
