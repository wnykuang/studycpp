#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char word[10] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate");++ch ){
        cout << word << endl;
        word[0] = ch;
    }
    return 0;
}
