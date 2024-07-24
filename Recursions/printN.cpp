#include <iostream>
using namespace std;
int print(int a);
int main() {
    int a;
    cin>>a;
    print(a);
}
int print(int a) {
    cout<<a<<endl;
    if(a==1) return 1;
    return print(a-1);
}