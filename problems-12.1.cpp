#include <iostream>

using namespace std;

class Drawable {
    public:
        virtual void draw() = 0; 
        virtual void move(int x, int y) = 0;
};

class Circle : public Drawable {
    public:
        void draw() {
            cout << "Drawing a circle" << endl;
        }
    
        void move(int x, int y) {
            cout << "Moving the circle by (" << x << ", " << y << ")" << endl;
        }
};


class Rectangle : public Drawable {
    public:
        void draw() {
            cout << "Drawing a rectangle" << endl;
        }
    
        void move(int x, int y) {
            cout << "Moving the rectangle by (" << x << ", " << y << ")" << endl;
        }
};


class Triangle : public Drawable {
    public:
        void draw() {
            cout << "Drawing a triangle" << endl;
        }
    
        void move(int x, int y) {
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