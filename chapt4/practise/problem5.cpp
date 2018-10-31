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
    CandyBar snack = {"Mocha Munch",2.3, 350}; 
    cout << "snack's brand is : " << snack.brandName;
    cout << "\nsnack's weight is : " << snack.weight;
    cout << "\nsnack's calories is : " << snack.calories;
    return 0;
}
