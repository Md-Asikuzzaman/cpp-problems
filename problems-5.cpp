#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    void printShape() {
        cout << "This is a shape." << endl;
    }
};

// Derived class Polygon
class Polygon : public Shape {
public:
    void printShape() {
        cout << "Polygon is a shape." << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Polygon {
public:
    void printShape() {
        cout << "Rectangle is a polygon." << endl;
    }
};

// Derived class Triangle
class Triangle : public Polygon {
public:
    void printShape() {
        cout << "Triangle is a polygon." << endl;
    }
};

// Derived class Square
class Square : public Rectangle {
public:
    void printShape() {
        cout << "Square is a rectangle." << endl;
    }
};

int main() {
    // Creating objects and calling printShape function
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    cout << "Calling printShape function by objects of each class:" << endl;
    shape.printShape();
    polygon.printShape();
    rectangle.printShape();
    triangle.printShape();
    square.printShape();

    return 0;
}
