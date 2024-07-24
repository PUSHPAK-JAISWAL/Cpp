#include <iostream>
using namespace std;
int add(int a,int b) {
    return a+b;
}
int main() {
    int a;
    cout<<"Enter first number.";
    cin>>a;
    int b;
    cout<<"Enter second number.";
    cin>>b;
    cout<<add(a,b)<<endl;
}