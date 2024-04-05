// A simple program in C++ to demonstrate how overloading functions work
// This program implements function overloading between integer and double type

#include <iostream>
using namespace std;

void print(int numI) 
{
    cout << "Integer : " << numI << endl;
}

void print(double numD) 
{
    cout << "Double : " << numD << endl;
}

int main() 
{
    int numI = 10;
    double numD = 3.14;
    // Calling overloaded functions
    print(numI);
    print(numD);
    return 0;
}
