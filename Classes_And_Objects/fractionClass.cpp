#include <iostream>
using namespace std;

class Fraction {
    public :
        int num;
        int den;

        Fraction (int num,int den) {
            this->num = num;
            this->den = den;
        }

        void display() {
            cout<<num<<"/"<<den<<endl;
        }

        Fraction operator+(Fraction f) {
            int newNum = this->num*f.den + f.num*this->den;
            int newDen = this->den*f.den;

            Fraction ans(newNum,newDen);

            return ans;

        }
};

int main() {
    Fraction f1(1,2);
    Fraction f2(1,3);

    f1.display();
    f2.display();

    //Fraction f3 = f1.add(f2);
    Fraction f3 = f1+f2;
    f3.display();
}