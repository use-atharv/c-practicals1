#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Get array size efficiently

    int sum = 0;

    // Iterate through the array and add elements to sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}
