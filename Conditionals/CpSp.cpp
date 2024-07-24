
#include <iostream>
using namespace std;

int main() {
    int cp;
    int sp;
    
    cout<<"Cost Price : ";
    cin>>cp;

    cout<<"Selling Price :";
    cin>>sp;

    if(cp==sp) cout<<"No profit No Loss";
    if(cp>sp) cout<<"Lose";
    if(cp<sp) cout<<"Profit";
}