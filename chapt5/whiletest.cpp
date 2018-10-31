#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    int guests = 0;
    while(++guests < 10){
        cout << guests << endl; 
    }
    return 0;
}
//if we use g++ will print 1,...,10. if we use ++g will be 1...9 
