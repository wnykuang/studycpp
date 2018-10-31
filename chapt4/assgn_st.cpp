#include <iostream>
#include <string>

struct inflatable{
    std::string name;
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable bouquet = {
        "sun flowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet:" << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $" << choice.price << endl;

    return 0;
}


