#include <iostream>

int main(){
    int year = 0;
    float Cleo = 100;
    float Daphne = 100; 
    do{
        Cleo += 10;
        Daphne *= 1.05;
        ++year;
    }while(Cleo > Daphne);
    std::cout << "After " << year << " years. Daphne has more money than Cleo, Daphne has: " << Daphne << " and Cleo has " << Cleo << "." << std::endl;
    return 0;
}
