// Program in C++ to demonstrate single level inheritance

#include <iostream>
using namespace std;

class Animal {
    private:
        int legs = 4;
    
    public:
        void display1() {
            cout << "Legs = " << legs << endl;
        }
};

// child class 'Dog' inherits the properties of parent class 'Animal'
class Dog : public Animal{
    private:
        bool tail = true;

    public:
        void display2() {
            cout << "Tail = " << (bool)tail << endl;
        }
};

int main() {
    Dog d1;
    d1.display1(); // child class can call the function of parent class
    d1.display2();
    return 0;
}
