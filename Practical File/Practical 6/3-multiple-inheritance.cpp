#include <iostream>
#include <string>

using namespace std;

class Basket {
    protected:
    
        int capacity;
    public:
        void displayCapacity() {
            cout << "Basket Capacity: " << capacity << "\n" << endl;
        }
};

class Apple : public Basket {
    private:
        string color;

    public:
        Apple(int cap, string col) {
            capacity = cap;
            color = col;
        }
        void displayColor() {
            cout << "Apple Colour: " << color << endl;
        }
};

class Mango : public Basket {
    private:
        string color;

    public:
        Mango(int cap, string col) {
            capacity = cap;
            color = col;
        }
        void displayColor() {
            cout << "Mango Colour: " << color << endl;
        }
};

class Watermelon : public Basket {
    private:
        string color;

    public:
        Watermelon(int cap, string col) {
            capacity = cap;
            color = col;
        }
        void displayColor() {
            cout << "Watermelon Colour: " << color << endl;
        }
};

int main() {
    Apple appleBasket(10, "Red");
    Mango mangoBasket(15, "Yellow");
    Watermelon watermelonBasket(3, "Green");

    appleBasket.displayColor();
    appleBasket.displayCapacity();

    mangoBasket.displayColor();
    mangoBasket.displayCapacity();

    watermelonBasket.displayColor();
    watermelonBasket.displayCapacity();

    return 0;
}
