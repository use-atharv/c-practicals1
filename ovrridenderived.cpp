#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void display() {
        cout << "Displaying from Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the display function
    void display() override {
        cout << "Displaying from Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    // Pointing to the derived object
    basePtr = &derivedObj;

    // Calling the overridden function
    basePtr->display();

    return 0;
}
