#include <iostream>

using namespace std;

// Abstract base class for drawable shapes
class Drawable {
public:
    virtual void draw() const = 0; // Pure virtual function to draw the shape
    virtual void move(int x, int y) = 0; // Pure virtual function to move the shape
};

// Concrete class for drawing a circle
class Circle : public Drawable {
public:
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }

    void move(int x, int y) override {
        cout << "Moving the circle by (" << x << ", " << y << ")" << endl;
    }
};

// Concrete class for drawing a rectangle
class Rectangle : public Drawable {
public:
    void draw() const override {
        cout << "Drawing a rectangle" << endl;
    }

    void move(int x, int y) override {
        cout << "Moving the rectangle by (" << x << ", " << y << ")" << endl;
    }
};

// Concrete class for drawing a triangle
class Triangle : public Drawable {
public:
    void draw() const override {
        cout << "Drawing a triangle" << endl;
    }

    void move(int x, int y) override {
        cout << "Moving the triangle by (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Create objects of different shapes
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    // Draw the shapes
    circle.draw();
    rectangle.draw();
    triangle.draw();

    // Move the shapes
    circle.move(10, 10);
    rectangle.move(5, 5);
    triangle.move(15, 15);

    return 0;
}
