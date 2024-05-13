#include <iostream>
using namespace std;

// Class with a copy constructor
class MyClass {
private:
    int data;
public:
    // Constructor
    MyClass(int d) : data(d) {}

    // Copy constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called" << endl;
        data = other.data;
    }

    // Member function to display data
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Creating an object
    MyClass obj1(10);

    // Creating another object and initializing it with obj1 using the copy constructor
    MyClass obj2 = obj1;

    // Displaying data of obj1 and obj2
    cout << "Data of obj1: ";
    obj1.display();
    cout << "Data of obj2: ";
    obj2.display();

    return 0;
}
