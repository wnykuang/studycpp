#include <iostream>
#include <string>

int main(){
    using namespace std;
    string word;
    cout << "Enter a word: ";
    getline(cin, word); 
    int i,j;
    char temp;
    for(i = 0, j = word.size() - 1; i < j; ++i,--j ){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << "This is our new word: " << word << endl;
    return 0;
}
