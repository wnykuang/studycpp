#include <iostream>
#include <string>

int main(){
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline:\n";
    cin >> charr1;
    cout << "Enter another kind of feline:\n";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << str1 <<  " "
        << charr2 << " " << str2 << endl;
    cout << "The third letter in " << charr1 << "is " << charr1[2] << endl;
    cout << "The third letter in " << str1 << "is " << str1[2] << endl;
    return 0;

}
