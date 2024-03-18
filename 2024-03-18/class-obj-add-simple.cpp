#include <iostream>
using namespace std;

class Addition {
    public:    
        void Add() {
            int a;
            int b;
            cout << "Enter a : ";
            cin >> a;
            cout << "Enter b : ";
            cin >> b;
            int sum = a + b;
            cout << a << " + " << b << " = " << sum;
        }
};

int main() {
    Addition a1;
    a1.Add();
    return 0;
}
