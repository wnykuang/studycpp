#include <array>
#include <iostream>
int main(){
    using namespace std;
    array<long double , 101> factorials;
    factorials[0] = factorials[1] = 1;
    for(int idx = 1; idx < 101; ++idx){
        factorials[idx] = idx * factorials[idx - 1];
    }
    cout << "100! is: " << factorials[100] << endl;
    return 0;
}
