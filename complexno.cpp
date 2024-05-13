#include <iostream>

class Complex {
private:
  double real;
  double imag;

public:
  // Constructor to initialize complex number
  Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

  // Function to get user input for complex number
  void getNumber() {
    std::cout << "Enter real part: ";
    std::cin >> real;

    std::cout << "Enter imaginary part (enter 0 for pure real number): ";
    std::cin >> imag;
  }

  // Function to display complex number
  void displayNumber() const {
    if (imag > 0) {
      std::cout << real << " + " << imag << "i" << std::endl;
    } else if (imag < 0) {
      std::cout << real << " - " << -imag << "i" << std::endl;
    } else {
      std::cout << real << std::endl;
    }
  }

  // Function to add two complex numbers
  Complex add(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
  }
};

int main() {
  Complex num1, num2, result;

  std::cout << "Enter first complex number:\n";
  num1.getNumber();

  std::cout << "Enter second complex number:\n";
  num2.getNumber();

  result = num1.add(num2);

  std::cout << "Sum of complex numbers:\n";
  result.displayNumber();

  return 0;
}
