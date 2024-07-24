#include <iostream>
using namespace std;

class Student {
    private: 
        string name;
        int roll;
        float marks;

    public:
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }

        void setRoll(int roll) {
            this->roll = roll;
        }
        int getRoll() {
            return this->roll;
        }

        void setMarks(float marks) {
            this->marks = marks;
        }
        float getMarks() {
            return this->marks;
        }
};

int main() {
    Student s1;
    Student s2;

    s1.setName("Pushpak Jaiswal");
    s1.setRoll(65);
    s1.setMarks(81.3);

    s2.setName("Rahul Mahale");
    s2.setRoll(69);
    s2.setMarks(85.7);    

    cout<<s1.getName()<<" "<<s1.getMarks()<<" "<<s1.getRoll()<<endl;
    cout<<s2.getName()<<" "<<s2.getMarks()<<" "<<s2.getRoll()<<endl;

}