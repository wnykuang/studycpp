#include <iostream>

int main(){
    using namespace std;
    double wages[3] = {1000.0, 200000.0, 30000.0};
    short stacks[3] = {3,2,1};

    double* pw = wages;//name of array is same as the address of the first element in the array
    short* ps = &stacks[0];//or using the address operator;

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw++;
    cout << "add 1 to the pw pointer, " <<endl;
    cout << "pw = " << pw <<", *pw = " << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps++;
    cout << "add 1 to the ps pointer, " <<endl;
    cout << "ps = " << ps <<", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notations: " <<endl;
    cout << "stacks[0] = " << stacks[0] << " , stacks[1] = " << stacks[1] << endl;
    cout << "access tow elements with pointer notations: " << endl;
    cout << "*stacks = " << *stacks << " , *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n\n";
    cout << sizeof(pw) << " = size of pw pointer \n\n";
    

    cout << "address of first element: wages = " << wages << endl;
    cout << "address of the whole array: &wages " << &wages << endl;

    return 0;
}
