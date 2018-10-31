#include <iostream>
int stonetolb(int);
int main(void){
    using namespace std;
    int stone;
    cout << "Enter the weight in stone "<< endl;
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << pounds << endl;
    return 0;
}
int stonetolb(int stone){
    return 14 * stone;
}
