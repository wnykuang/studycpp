#include <iostream>
#include <string>

int main(){
    using namespace std;
    string firstname, lastname;
    cout << "Enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);
    
    cout << "Here's the information in a single string: " << lastname + ", " +firstname << endl; 
    return 0;
}
