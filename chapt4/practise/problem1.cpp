#include <iostream>
#include <string>
struct studentinfo{
    std::string firstname;
    std::string lastname;
    char latter;
    int age;
};

int main(){
    using namespace std;

    studentinfo* pst = new studentinfo;
    cout << "What is your first name? ";
    getline(cin, pst -> firstname);
    cout << "What is your last name? ";
    getline(cin, pst -> lastname) ;
    cout << "What grade do you deserve? ";
    cin >> pst -> latter;
    pst -> latter++;
    cout << "How old are you? ";
    cin >> pst -> age;
    cout << "Name: " << pst -> lastname << "," << pst -> firstname << endl;
    cout << "Grade: " << pst -> latter;
    cout << "\nAge: " << pst -> age;
    delete pst;
    return 0;
}
