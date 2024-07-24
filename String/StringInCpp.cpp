#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'r','a','g','h','a','v'};// this is a first type of declaration
    for(int i=0;i<6;i++) {
        cout<<arr[i];
    }
    int size = sizeof(arr);
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<length;

    string s;// secound declaration of string
    
    cin>>s;
    cout<<endl<<s<<endl;

}