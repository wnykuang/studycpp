#include <iostream>
#include <string>

int main(){
    using namespace std;
    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1 =" << s1 << ", s2 = "<< s2 <<endl;
    cout << "You can assign a C-style string to a string object.\n"; 
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "You can concatentate s3 = s2 + s1"<<endl;
    s3 = s2 + s1;
    cout << "s3: " << s3 << endl;;
    cout << "You can append string: \n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = "<<s1<<endl;
    s2 += " for a day.";
    cout <<"s2 += \" for a day\" yields s2 = " << s2 << endl;
    return 0;
}
