#include <iostream>
using namespace std;

class Student { 
public:
    int roll_no;
    string name;
    float marks;

    void display() {
        cout<<name<<" "<<marks<<" "<<roll_no<<endl;
    }
};

int main() {
    Student s1;
    s1.roll_no = 76;
    s1.name = "Pushpak Jaiswal";
    s1.marks = 83;

    s1.display();
}