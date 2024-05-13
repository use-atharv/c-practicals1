#include <iostream>

using namespace std;

int main() {
    double numbers[] = {5.2, 10.4, 15.6, 20.8};  // Example array (using double for decimals)
    int n = sizeof(numbers) / sizeof(numbers[0]);  // Get array size efficiently

    double sum = 0.0;

    // Iterate through the array and add elements to sum
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    // Calculate average (handle division by zero)
    double average = (n > 0) ? sum / n : 0.0;  // Avoid division by zero

    cout << "The average of the numbers in the array is: " << average << endl;

    return 0;
}
