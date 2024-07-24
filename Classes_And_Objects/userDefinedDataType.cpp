#include <iostream>
using namespace std;

class Student {// class user defined  new data type
public:
    string name;
    int roll_no;
    float gpa;
};

int main() {
    Student x;//object
    x.name = "Pushpak";
    x.roll_no = 65;
    x.gpa = 8.8;

    cout<<x.gpa<<endl;
    cout<<x.roll_no<<endl;
    cout<<x.name<<endl;

    Student x1;//object
    x1.name = "raghav";
    x1.roll_no = 69;
    x1.gpa = 8.2;

    cout<<x1.gpa<<endl;
    cout<<x1.roll_no<<endl;
    cout<<x1.name<<endl;
}