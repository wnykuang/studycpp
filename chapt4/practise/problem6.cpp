#include <iostream>
#include <string>
struct CandyBar{
   //sing namespace std;
   std::string brandName;
   double weight;
   int calories;
};

int main(){
    using namespace std;
    CandyBar snacks[3] = {
    {"WeDoMe" , 2.98, 300},
    {"OliO", 3.57, 150},
    {"No Brand", 2.7 , 2000}
    };
    cout << "snack's brand is : " << snacks[0].brandName;
    cout << "\nsnack's weight is : " << snacks[0].weight;
    cout << "\nsnack's calories is : " << snacks[0].calories;
    
    cout << "snack's brand is : " << snacks[1].brandName;
    cout << "\nsnack's weight is : " << snacks[1].weight;
    cout << "\nsnack's calories is : " << snacks[1].calories;
    
    cout << "snack's brand is : " << snacks[2].brandName;
    cout << "\nsnack's weight is : " << snacks[2].weight;
    cout << "\nsnack's calories is : " << snacks[2].calories;
    return 0;
}
