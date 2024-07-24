#include <iostream>
using namespace std;

int main() {
    int x[5];//declaration of array

    x[0]=5;
    x[1]=4;
    x[2]=3;
    x[3]=2;
    x[4]=1;

    for(int i=0;i<5;i++) {
        cout<<x[i]<<endl;
    }
}