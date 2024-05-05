// Program in C++ to demonstrate the use of Virtual Functions in class
/* A virtual function (also known as virtual methods) is a member function that is declared within a base class and is 
re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to 
the base class, you can call a virtual function for that object and execute the derived class’s version of the method. */

#include <iostream>
using namespace std;

class Parent {
    public:
        virtual void show() {
            cout << "Parent Class." << endl;
        }
};

class child1: public Parent {
    public:
        void show() {
            cout << "Child Class 1." << endl;
        }
};

class child2: public Parent {
    public:
        void show() {
            cout << "Child Class 2." << endl;
        } 
};

int main()
{
    Parent p1;
    Parent *p = &p1;
    child1 c1;
    child2 c2;
    p -> show(); // Parent Class.
    p = &c1;
    p -> show(); // Child Class 1.
    p = &c2;
    p -> show(); // Child Class 2.
    return 0;
}
