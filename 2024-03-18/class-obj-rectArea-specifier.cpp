#include <iostream>
using namespace std;

class rectArea {
    private:
        int length;
        int breadth;
        int area;
    public:
        void setData() {
            cout << "Enter length : ";
            cin >> length;
            cout << "Enter breadth : ";
            cin >> breadth;
        }
        void calculate() {
            int area = length * breadth;
            cout << "Area of rectangle is = " << area;
        }
};

int main() {
    rectArea r1;
    r1.setData();
    r1.calculate();
    return 0;
}
