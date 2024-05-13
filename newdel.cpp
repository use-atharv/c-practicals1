#include <iostream>
using namespace std;

int main() {
    // Dynamically allocating memory for an integer
    int* ptr = new int;

    // Checking if memory allocation is successful
    if (ptr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Assigning a value to the dynamically allocated memory
    *ptr = 42;
    cout << "Dynamically allocated integer: " << *ptr << endl;

    // Deallocating the dynamically allocated memory
    delete ptr;

    // After deallocation, the pointer should be set to nullptr
    ptr = nullptr;

    // Attempting to access the deallocated memory (undefined behavior)
    // cout << "Dynamically allocated integer after deallocation: " << *ptr << endl;

    return 0;
}
