#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    float width;
    float height;
public:
    Shape(float w, float h) : width(w), height(h) {}

    virtual float area() = 0; // Pure virtual function
};

// Derived class 1
class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : Shape(w, h) {}

    float area() override {
        return width * height;
    }
};

// Derived class 2
class Triangle : public Shape {
public:
    Triangle(float w, float h) : Shape(w, h) {}

    float area() override {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect(5, 4);
    Triangle tri(5, 4);

    cout << "Area of rectangle: " << rect.area() << " square units" << endl;
    cout << "Area of triangle: " << tri.area() << " square units" << endl;

    return 0;
}
