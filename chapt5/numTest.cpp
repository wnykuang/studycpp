#include <iostream>
int main(){
    using namespace std;
    cout << "Enter the starting countdown: ";
    int limit;
    cin >> limit;
    int i;
    for( i = limit; i ; --i){
        cout <<"i = " << i << endl;
    }
    cout << "Done now that i is " << i << endl;
    return 0;
}
