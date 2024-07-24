#include <iostream>
using namespace std;

int main() {
    string s = "cow is an animal with four legs";
    int count = 0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='u' or s[i]=='o') {
            count++;
        }
    }
    cout<<count<<endl;
}