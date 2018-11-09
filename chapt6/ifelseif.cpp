#include <iostream>
const int Fave = 27;

int main(){
    using namespace std;
    int n;

    cout << "Enter a number in a range 1 - 100 to find my lucky number." << endl;
    do{
        cin >> n;
        if(n < Fave){
            cout << "Too low -- guess again: ";
        }
        else if (n > Fave){
            cout << "Too hight -- guess again: ";
        }
        else{
            cout << Fave << " is right!\n";
        }
    }while(n != Fave);
    return 0;
}

