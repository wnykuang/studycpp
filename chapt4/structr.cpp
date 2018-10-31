#include <iostream>
#include <string>
using namespace std;
struct inflatable{
    string name;
    float volume;
    double price;
};

int main(){
    //using namespace std;
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };
    cout << "Expand your guest list with " << guest.name;
    cout << "And your pal name: " << pal.name;
    cout << "You can have both $";
    cout << pal.price + guest.price << "!\n";
    return 0;
}
