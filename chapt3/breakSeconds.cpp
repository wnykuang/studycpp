#include <iostream>

int main(){
    using namespace std;
    const int minInHour = 60, secinMin = 60, hourInDay = 24;
    int days, hours, mins, secs, total;
    cout << "Enter the number of seconds: ";
    cin >> secs;
    total = secs;
    days = secs / (secinMin * minInHour * hourInDay);
    secs = secs % (secinMin * minInHour * hourInDay);
    hours = secs / (secinMin * minInHour);
    secs = secs % (secinMin * minInHour);
    mins = secs / (secinMin);
    secs = secs % (secinMin);
    cout << total << " seconds is " << days << " days " << hours << " hours, " << mins << " minutes, " << secs << " seconds." << endl;
    return 0;
}
