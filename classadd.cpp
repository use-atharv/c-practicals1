#include <iostream>

class Adder {
private:
  int num1;
  int num2;
  int sum;

public:
  // Constructor to initialize the numbers with predefined values
  Adder(int a, int b) : num1(a), num2(b) {}

  // Function to calculate the sum
  void calculateSum() {
    sum = num1 + num2;
  }

  // Function to display the sum
  void displaySum() const {
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
  }
};

int main() {
  // Create an Adder object with predefined values
  Adder adder(5, 3);

  // Calculate the sum
  adder.calculateSum();

  // Display the sum
  adder.displaySum();

  return 0;
}
