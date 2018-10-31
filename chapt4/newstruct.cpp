#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable* ps = new inflatable;
    cout << "Please input the name of inflabtable: " << endl;
    cin >> ps->name;
    cout << "Input the volume: " << endl;
    cin >> (*ps).volume;
    cout << "Input the price: ______ $\b\b\b\b\b";
    cin >> ps -> price;

    cout << "name: " << (*ps).name <<" ; volume : " << ps -> volume << " L ; price : " << ps -> price << " $ " << endl;

    return 0;
}
