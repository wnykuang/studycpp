#include <iostream>

int main(){
    using std::cin;
    using std::cout;
    char ch;
    int space = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.'){
        if (ch == ' ')
            ++space;
        ++total;
        cin.get(ch);
    }
    cout << space << " spaces, " << total << " characters in the sentence. " << std::endl;
    return 0;
}
