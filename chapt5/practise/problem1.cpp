#include <iostream>

int main(){
    using namespace std;
    int infimum;
    int supremum;
    cout << "please input the lower bound: " <<endl;
    cin >> infimum;
    cout << "please input the upper bound: " << endl;
    cin >> supremum;
    int sum = 0;
    for(int iter = infimum; iter <= supremum; ++iter){
        sum += iter;
    }
    cout << "The lower bound is " << infimum << " and the upper bound is " << supremum << " . The sum between and include the bounds is "
        << sum << endl;
    return 0;
}
