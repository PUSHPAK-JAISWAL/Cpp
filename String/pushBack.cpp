#include <iostream>
using namespace std;

int main() {
    string s= "Pushpak";
    cout<<s<<endl;
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string s1=" Jaiswal";
    s.append(s1);
    cout<<s<<endl;
}