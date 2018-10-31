#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char firstname[20], lastname[20];
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;
    
    strcat(lastname, ", ");
    strcat(lastname, firstname);
    cout << "Here's the information in a single string: " << lastname<< endl; 
    return 0;
}
