#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 3, 45, 2, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);  // Get array size

    int min_value = arr[0];  // Assume the first element is the minimum initially

    // Iterate through the array
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    cout << "The minimum value in the array is: " << min_value << endl;

    return 0;
}
