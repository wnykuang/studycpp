#include <iostream>

int main(){
    using namespace std;
    cout << "This program may reformat your hard disk\n"
            "and destroy all your data.\n"
            "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if ('y' == ch || 'Y' == ch)
        cout << "You were warned!\a\a\a" << endl;
    else if ('N' == ch || 'n' == ch)
        cout << "A wise choice... bye\n" << endl;
    else
        cout << "That wasn't a y or n! Apparently you " "can't follow\ninstructions, so " "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}
