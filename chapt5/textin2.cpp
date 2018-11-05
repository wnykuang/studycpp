#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; Enter # to quit:\n";
    cin.get(ch);//get the first char
    while (ch!='#'){
        cout << ch;
        ++count;
        cin.get(ch);// get the next char

    }
    cout << endl << count << " characters read in." << endl;
    return 0;

}
