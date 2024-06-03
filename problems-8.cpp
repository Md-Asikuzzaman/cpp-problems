#include <iostream>

using namespace std;

class Shape {
protected:
    double side1, side2;

public:
    void get_data(double s1, double s2 = 0) {
        side1 = s1;
        side2 = s2;
    }

    virtual void display_area() {
        cout << "Area: ";
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        Shape::display_area();
        cout << 0.5 * side1 * side2 << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        Shape::display_area();
        cout << side1 * side2 << endl;
    }
};

class Circle : public Shape {
public:
    void display_area() override {
        Shape::display_area();
        cout << 3.14159 * side1 * side1 << endl; // assuming pi value
    }
};

int main() {
    Shape *s;
    Triangle t;
    Rectangle r;
    Circle c;

    cout << "Enter dimensions for Triangle:" << endl;
    s = &t;
    s->get_data(4, 5); // base and height
    s->display_area();

    cout << "\nEnter dimensions for Rectangle:" << endl;
    s = &r;
    s->get_data(4, 6); // length and width
    s->display_area();

    cout << "\nEnter radius for Circle:" << endl;
    s = &c;
    s->get_data(3); // radius
    s->display_area();

    return 0;
}
