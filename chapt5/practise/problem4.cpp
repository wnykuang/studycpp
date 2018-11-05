#include <iostream>

int main(){
    using namespace std;
    int sum = 0;
    int in;
    cout << "Please input a interge to compute the cummulative sum, if you are willing to stop please input the 0" << endl;
    do{
        cin >> in;
        sum += in;
    }while (in != 0);

    cout << "The sum of cummulative integers is: " << sum << endl;
    return 0;
}
