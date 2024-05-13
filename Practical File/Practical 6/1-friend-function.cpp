// Program in C++ to demonstrate friend function
// Program to find the mean of two given values using Friend function

#include <iostream>
using namespace std;

class Numbers {
    private:
        int a, b;

    public:
        void set_data();
        // friend function declaration is done inside the class
        friend float mean(Numbers); 
};

void Numbers :: set_data() {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

// friend function initialization is done outside the class
float mean(Numbers N) {
    float avg = (N.a + N.b) / 2;
    return avg;
}

int main() {
    Numbers N1;
    N1.set_data();
    // friend function is called without an object caller
    cout << "The mean value is: " << mean(N1);
    return 0;
}
