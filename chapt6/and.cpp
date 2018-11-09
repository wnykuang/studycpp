#include <iostream>
const int ArSize = 6;

int main(){
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "<< "of\nyour neighbors. Program terminates " << "when you make\n" << ArSize << " entries " << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First Value: ";
    cin >> temp;
    while(i < ArSize-1 && temp >= 0){
        naaq[i] = temp;
        ++i;
       // if (i < ArSize)
        {
            cout << "Next Value: ";
            cin >> temp; //read value from input for naaq[idx+1]
        }
    }
    if (i == 0){
        cout << "No -- data bye \n";
    }
    else{
        cout << "Enter your NAAQ: " << endl;
        float you;
        cin >> you;
        int count = 0;
        for (int i = 0 ; i < ArSize ; ++i){
            if(naaq[i] > you)
                ++count;
        }
        cout << count;
        cout << " of your neighbors have greater awareness of\n" << "the New Age than you do.\n";
    }
    return 0;
}
