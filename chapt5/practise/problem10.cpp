#include <iostream>

int main(){
    using namespace std;
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int row;
    for (row = 0; row < rows; ++ row){
        int numberofdot = rows - row - 1;
        int numberofstar = row + 1;
        for(int i = 0; i < numberofdot; ++i){
            cout << ".";
        }
        for(int i = 0; i < numberofstar; ++i){
            cout << "*";
        }
        cout <<'\n';
    }
}
