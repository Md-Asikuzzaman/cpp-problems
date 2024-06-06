#include <iostream>

using namespace std;

class Shape {
protected:
    double side1, side2;

public:
    void get_data() {
        cout << "Enter the dimensions-1: ";
        cin >> side1;
        cout << "Enter the dimensions-2: ";
        cin >> side2;
    }

    virtual void display_area() {
        cout << "Area: ";
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        Shape::display_area();
        cout << 0.5 * side1 * side2 << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        Shape::display_area();
        cout << side1 * side2 << endl;
    }
};

int main() {
    Shape *s;
    Triangle t;
    Rectangle r;

    cout << "Enter dimensions for Triangle:" << endl;
    s = &t;
    s->get_data();
    s->display_area();

    cout << "Enter dimensions for Rectangle:" << endl;
    s = &r;
    s->get_data();
    s->display_area();

    return 0;
}