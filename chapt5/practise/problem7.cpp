#include <iostream>
#include <string>
struct car 
{
    std::string maker;
    int year;
};

int main(){
    using namespace std;
    int cars;
    cout << "How many cars do you wish to log into catalog? ";
    cin >> cars;
    car* carList = new car[cars];
    for (int idx = 0; idx < cars; ++idx){
        cout << "Car #" << idx+1 <<":" << endl;
        cout <<"Please enter the maker: ";
        cin.ignore();
        getline(cin, carList[idx].maker);

        cout <<"Please enter the year made: ";
        cin >> carList[idx].year;
    }
    cout << "Here is your collections: " << endl;
    for (int idx = 0; idx < cars; ++idx){
        cout << carList[idx].year << " " << carList[idx].maker << endl; 
    }
    delete[] carList;
    return 0;
}
