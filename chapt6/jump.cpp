#include <iostream>
const int ArSize = 80;

int main(){
    using namespace std;
    char line[ArSize];
    int spaces = 0;
    cout << "Enter a line of text:\n";
    cin.get(line, ArSize);
    cout << "Complete line:\n" << line << endl;
    cout << "Line through first period:\n";
    for (int idx = 0;line[idx] != '\0'; ++idx){
        cout << line[idx];
        if (line[idx] == '.')
            break;
        else if(line[idx] != ' ')
            continue;
        ++spaces;
    }
    cout << "\n " << spaces << " spaces\n";
    cout << "Done.\n";
    return 0;
}
