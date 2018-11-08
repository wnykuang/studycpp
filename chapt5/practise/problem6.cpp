#include <iostream>
#include <string>
const int MONTHS = 12;
const int YEARS = 3;
int main(){
    using namespace std;
    string month[MONTHS] = {"Jan", "Feb", "Mar", "Apr","May","Jun" ,"Jul",  "Aug", "Sept", "Oct", "Nov" , "Dec"};
    int year[YEARS] = {2001, 2002, 2003};
    int sell[YEARS][MONTHS];
    int totalYear[YEARS];
    for (int y = 0; y < YEARS; ++y){
        int thisYearTotal = 0;
        for (int m = 0; m < MONTHS; ++m){
            cout << "Please input the sell number for year: " << year[y] << " and month: " << month[m];
            cin >> sell[y][m];
            thisYearTotal += sell[y][m];
        }
        totalYear[y] = thisYearTotal;
    }
    int totalAmongYears = 0;
    for (int y = 0; y < YEARS; ++y){
        cout << "For the year " << year[y] << ". The total amount sell is :"<< totalYear[y];
        totalAmongYears += totalYear[y];

    }
    cout << "The total sell amount among all three years is: " << totalAmongYears << endl;
    return 0;
}

