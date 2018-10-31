#include <iostream>
void showtime(int,int);

int main(){
    int hours = 0;
    int minutes = 0;
    using namespace std;
    cout << "Enter the number of hours: "<< endl;
    cin >> hours;
    cout << "Enter the number of minutes: "<< endl;
    cin >> minutes;
    showtime(hours, minutes);
    return 0;
}

void showtime(int hours, int minutes){
    using namespace std;
    cout << "Time: " << hours << ":" << minutes << endl;
    return;
}
