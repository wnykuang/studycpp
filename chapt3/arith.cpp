#include <iostream>

int main(){
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << endl;
    cout << "heads = " << heads << endl;

    cout << "heads + hats = " << heads + hats << endl;    
    cout << "heads - hats = " << heads - hats << endl;
    cout << "heads * hats = " << heads * hats << endl;
    cout << "heads / hats = " << heads / hats << endl;
    return 0;
}
