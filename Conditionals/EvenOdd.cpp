#include <iostream>
using namespace std;
 
int main() {
    int x;
    cin>>x;
    if(x%2==0&&x!=0) cout<<x<<" Is a Even number."<<endl;
    else if(x!=0) cout<<x<<" Is a Odd Number."<<endl;
    else cout<<x<<" Is Zero."<<endl;
    return 0;
}