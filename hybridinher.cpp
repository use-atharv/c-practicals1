#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void displayBase() {
        cout << "Displaying from Base class" << endl;
    }
};

// Derived class 1 (Hierarchical)
class Derived1 : public Base {
public:
    void displayDerived1() {
        cout << "Displaying from Derived1 class" << endl;
    }
};

// Derived class 2 (Multiple)
class Derived2 {
public:
    void displayDerived2() {
        cout << "Displaying from Derived2 class" << endl;
    }
};

// Derived class 3 (Hybrid)
class Derived3 : public Derived1, public Derived2 {
public:
    void displayDerived3() {
        cout << "Displaying from Derived3 class" << endl;
    }
};

int main() {
    Derived3 obj;

    // Accessing methods from different classes
    obj.displayBase();
    obj.displayDerived1();
    obj.displayDerived2();
    obj.displayDerived3();

    return 0;
}
