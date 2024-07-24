#include <iostream>
using namespace std;

class Vehicle {//parent
    public:
        int topSpeed;
        float mileage;
        string fuel;
    
};

class FourWheeler : public Vehicle {
    public:
};

class TwoWheeler : public Vehicle {
    public:
};

class Bike : public TwoWheeler {
    public:
};

class Scooty : public TwoWheeler {
    public:
};

int main() {

}