#include <iostream>

int main(){
    using namespace std;
    const int arctodegree = 60 , sectoarc = 60;
    float degree, min, sec;
    cout << "First, enter the degree: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the second of arc: ";
    cin >> sec;
    float degreeindecimal = degree + min / arctodegree + sec / (arctodegree * sectoarc);
    cout << degree << " degrees, " << min << " minutes, " << sec << " seconds = "<<degreeindecimal << " degrees. "<< endl;
    return 0;
}
