// Write a Program to illustrate the use of pointers to objects which are related by inheritance.

/* Inherited class inherits properties and behaviors from an existing class (base class). 
When you have a pointer to a base class, you can use it to refer to objects of both the base class and any of its derived classes. */

#include <iostream>
using namespace std;

class Base {
    public:
        void showBase() {
            cout << "Base" << endl;
        }
};

class Derv1 : public Base {
    public:
        void showDerived() {
            cout << "Derv1" << endl;
        }
};

int main() {
    Derv1 dv1;
    Base *ptr;
    ptr = &dv1; // you can pass address of derived class object in base class type pointer
    ptr -> showBase();
    // ptr -> showDerived(); // error, cannot access derived class member function using base class type pointer
    ((Derv1*) ptr) -> showDerived(); // explicitly typecasting is required.
    return 0;
}
