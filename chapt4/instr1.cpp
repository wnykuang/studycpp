#include <iostream>

int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout <<"Enter your name:" << endl;
    cin >> name;
    cout << "Enter your favourite dessert: "<<endl;
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, "<< name << endl;
    return 0;

}
