// Program in C++ to show the conversion between objects of different classes
#include <iostream>
using namespace std;

class Time {
    private:
        int hrs, min;
    public:
        Time(int h, int m) {
            hrs = h;
            min = m;
        }
        Time() {
            cout << "Time's object is created!" << endl;
        }
        int getMinutes() {
            int tot_min = (hrs * 60) + min;
            return tot_min;
        }
        void display() {
            cout << "Hours: " << hrs << endl;
            cout << "Minutes: " << min << endl;
        }
};

class Minute {
    private:
        int min;
    public:
        Minute() {
            min = 0;
        }
        void operator=(Time t) {
            min = t.getMinutes();
        }
        void display() {
            cout << "\nTotal Minutes: " << min << endl;
        }
};

int main() {
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1; // Conversion between objects of different classes
    // m1.operator=(t1);
    t1.display();
    m1.display();
    return 0;
}
