#include <iostream>
const int Max = 5;

int main(){
    using namespace std;
    double fish[Max];
    cout << "Please enter your weight of your fish.\n";
    cout << "You may enter up to: " << Max << " fish <q to terminate>. \n";
    cout << "fish #1 " << endl;
    int i = 0;
    while( i < Max && cin >> fish[i] ){
        if (++i < Max)
            cout << "fish: # " << i + 1 << " : ";
    }
    double total = 0.0;
    for (int idx = 0; idx < i; ++ idx){
        total += fish[idx];
    }
    if(i == 0)
        cout << "No fish" << endl;

    else
        cout << "The average weight of " << i << " fish is " << total / i << endl;
   return 0; 
}

