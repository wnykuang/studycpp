#include <iostream>
int main(){
    using namespace std;
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.7;
    cout << "p3[1] is " << p3[1] << endl;
    p3 = p3 + 1;
    cout << "after p3 += 1" << endl;
    cout << "p3[0] is " << p3[0] << endl;
    cout << "p3[1] is " << p3[1] << endl;
    p3 -= 1;
    delete[] p3;
    return 0;
}
