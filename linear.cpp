#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x) {
    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Return the index if found
        }
    }

    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;  // Value to search for

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        cout << "The value " << x << " is not present in the array." << endl;
    } else {
        cout << "The value " << x << " is present at index " << result << "." << endl;
    }

    return 0;
}
