#include <iostream>
using namespace std;

int main() {
    int n;
    int i=1;
    cin>>n;
    while((1+(n-1)*2)>=i) {
        cout<<i<<endl;
        i=i+2;
    }
}