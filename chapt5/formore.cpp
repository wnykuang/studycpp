#include <iostream>
const int arrSize = 16;
int main(){
    using namespace std;
    long long factorials[arrSize];
    factorials[0] = factorials[1] = 1LL;
    for (int idx = 2; idx < arrSize ; ++idx){
        factorials[idx] = idx * factorials[idx - 1] ;
    }
    for (int idx = 0; idx < arrSize ; ++idx){
        cout << "we are iterating the " << idx <<"! = " << factorials[idx] << endl;
    }
    return 0;
}
