#include <iostream>
int main(){
    using namespace std;
    int quizscores[10] = {
        20, 20, 20, 20, 20, 19, 20, 18, 20, 20
    };
    cout <<"Doint it right :" << endl;
    int i;
    for (i = 0; quizscores[i] == 20 ; i++){
        cout << " Quiz " << i << " score is 20." << endl;
    }
    return 0;
}
