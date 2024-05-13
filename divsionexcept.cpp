#include <iostream>
using namespace std;

class Arithmetic {
public:
    // Function to add two numbers
    float add(float a, float b) {
        return a + b;
    }

    // Function to subtract two numbers
    float subtract(float a, float b) {
        return a - b;
    }

    // Function to multiply two numbers
    float multiply(float a, float b) {
        return a * b;
    }

    // Function to divide two numbers
    float divide(float a, float b) {
        if (b == 0) {
            throw "Division by zero!";
        }
        return a / b;
    }
};

int main() {
    Arithmetic calc;
    float num1, num2;
    char op;
    float result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    float* numPtr1 = &num1;
    float* numPtr2 = &num2;

    try {
        switch (op) {
            case '+':
                result = calc.add(*numPtr1, *numPtr2);
                break;
            case '-':
                result = calc.subtract(*numPtr1, *numPtr2);
                break;
            case '*':
                result = calc.multiply(*numPtr1, *numPtr2);
                break;
            case '/':
                result = calc.divide(*numPtr1, *numPtr2);
                break;
            default:
                cout << "Invalid operator!" << endl;
                return 1;
        }

        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
