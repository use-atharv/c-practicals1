#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);  // Get array size

    int max_value = arr[0];  // Assume the first element is the maximum initially

    // Iterate through the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    cout << "The maximum value in the array is: " << max_value << endl;

    return 0;
}
