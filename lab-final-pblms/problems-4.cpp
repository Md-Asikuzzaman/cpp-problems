#include <iostream>
using namespace std;

class Fruit {
    public:
        virtual void showItem() {
            cout << "Total sells" << endl;
        };
};

class Mango: public Fruit {
    public:
        void showItem() {
            cout << "Sells mango" << endl;
        }
};

class Watermelon: public Fruit {
    public:
        void showItem() {
            cout << "Sells watermelon" << endl;
        }
};

int main() {
    
    Fruit* ptr;
    
    ptr = new Mango();
    ptr->showItem();
    
    ptr = new Watermelon();
    ptr->showItem();

    return 0;
}
