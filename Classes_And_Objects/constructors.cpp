#include <iostream>
using namespace std;
class Student {
    public: 
        string name;
        int roll_no;
        float gpa;

        Student() {//default constructor

        }

        Student(string s, int r, float g) {// parameterised constructor
            name =s;
            roll_no = r;
            gpa = g;
        }
};
int main() {
    Student s1("Pushpak Jaiswal",65,8.1);

    Student s2;
    s2.name = "Raghav Garg";
    s2.roll_no = 88;
    s2.gpa = 8.5;

    cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.roll_no<<" "<<s2.gpa<<endl;
}