#include <iostream>
using namespace std;

void usa() {
    cout<<"You are in USA"<<endl;
    return;
}
void india() {
    cout<<"Your are India"<<endl;
    return;
}
int main() {
    usa();
    cout<<"You are in main"<<endl;
    india();
    return 0;
}