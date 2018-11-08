#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char word[20];
    int count = 0;
    cout << "Enter words (to stop, type the word done):";
    cin >> word;
    //strcmp(word, "mate");
    while(strcmp(word, "done")){
        cin >> word;
        count++;
    }
    cout << "Your enter total of " << count << " words." << endl; 
    return 0;
}
