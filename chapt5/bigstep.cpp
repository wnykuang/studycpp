#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by: " << by << " s: \n"; 
    for (int idx = 0; idx < 100 ; idx += by){
        cout << "I'm counting " << idx << endl;
    }
    return 0;
}
