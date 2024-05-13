#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading binary - operator
    Complex operator-(const Complex& c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Display function
    void display() {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    float real1, imag1, real2, imag2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> real1 >> imag1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> real2 >> imag2;

    // Creating objects of Complex class
    Complex c1(real1, imag1), c2(real2, imag2), result;

    // Subtracting two complex numbers
    result = c1 - c2;

    // Displaying the result
    result.display();

    return 0;
}
