#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    cin>>a>>b>>c;
    int largest = a;
    if(largest<b) largest =b;
    if(largest<c) largest = c;

    cout<<largest<<" is the greatest number";
    
}