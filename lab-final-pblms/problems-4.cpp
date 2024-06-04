#include <iostream>
using namespace std;

// Base class
class Fruit {
    public:
        virtual void showItem() = 0;
};

// Derived class Mango
class Mango : public Fruit {
    public:
        void showItem() {
            cout << "Sells mango" << endl;
        }
};

// Derived class Watermelon
class Watermelon : public Fruit {
    public:
        void showItem() {
            cout << "Sells watermelon" << endl;
        }
};

int main() {
    Mango mango;
    Watermelon watermelon;

    mango.showItem();
    watermelon.showItem();

    return 0;
}