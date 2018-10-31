#include <iostream>
double convertFurlongsToYards(double);

int main(void){
    using namespace std;
    double Furlongs;
    double Yards;
    cout << "Please type a number of furlongs\n";
    cin >> Furlongs;
    Yards = convertFurlongsToYards(Furlongs);
    cout << "That is " << Yards << " Yards.\n"; 
    return 0;
}

double convertFurlongsToYards(double F){
    return 220.0 * F;
}
