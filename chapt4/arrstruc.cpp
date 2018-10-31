#include <iostream>
#include <string>

struct inflatable{
    std::string name;
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable guests[2] = {
        {"Bambi" , 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };
    cout << "The guests " << guests[0].name << " and " << guests[1].name << "\nhave combine value of ";
    cout << guests[0].volume + guests[1].volume << " cubic feet.\n" << endl;
    return 0;
}
