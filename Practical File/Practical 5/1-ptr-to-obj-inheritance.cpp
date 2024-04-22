// Write a Program to illustrate the use of pointers to objects which are related by inheritance.

/* Inherited class inherits properties and behaviors from an existing class (base class). 
When you have a pointer to a base class, you can use it to refer to objects of both the base class and any of its derived classes. */

#include <iostream>
using namespace std;

class Shape 
{
	protected:
		int width, height;
	public:
		void set_values(int a, int b)
		{
			width = a;
			height = b;
		}
};

class Rectangle : public Shape 
{
	public:
		int area()
		{
			return (width * height);
		}
};

class Triangle : public Shape
{
	public:
		int area()
		{
			return ((width * height) / 2);
		}
};

int main() 
{
	Rectangle rect;
	Triangle trg;

        // Pointer to object of base class (parent class) for storing values
        // Pointer to base class, referring to objects of derived class
	Shape* s1 = &rect;
	Shape* s2 = &trg;

	s1 -> set_values(5,6);
	s2 -> set_values(5,6);

    	// Pointer to object of derived class (child class) for printing area
    	Rectangle*r1 = &rect;
    	Triangle* t1= &trg;

	cout << "Pointers to object (Inherited Class)." << endl;
	cout << "Area of Rectangle : " << r1 -> area() << endl;
	cout << "Area of Triangle : " << t1 -> area() << endl;

	return 0;
}
