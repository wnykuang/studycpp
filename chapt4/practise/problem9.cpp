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
    CandyBar* snacks = new CandyBar[3]; 
    
    snacks[0].brandName = "weDome";
    snacks[0].weight = 0.3;
    snacks[0].calories = 237;
   
    snacks[1].brandName = "Dian Dou de";
    snacks[1].weight = 23;
    snacks[1].calories = 35;

    snacks[2].brandName = "Olio";
    snacks[2].weight = 32;
    snacks[2].calories = 555;
    
    cout << "snack's brand is : " << snacks[0].brandName;
    cout << "\nsnack's weight is : " << snacks[0].weight;
    cout << "\nsnack's calories is : " << snacks[0].calories;
    
    cout << "snack's brand is : " << snacks[1].brandName;
    cout << "\nsnack's weight is : " << snacks[1].weight;
    cout << "\nsnack's calories is : " << snacks[1].calories;
    
    cout << "snack's brand is : " << snacks[2].brandName;
    cout << "\nsnack's weight is : " << snacks[2].weight;
    cout << "\nsnack's calories is : " << snacks[2].calories;
    
    delete[] snacks;
    return 0;
}
