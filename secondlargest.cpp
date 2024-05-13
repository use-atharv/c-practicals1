#include <iostream>
#include <climits> // for INT_MIN

using namespace std;

int findSecondLargest(int arr[], int n) {
  // Handle cases with less than 2 elements
  if (n < 2) {
    return -1; // Indicate invalid input (array size less than 2)
  }

  // Initialize variables to track largest and second largest
  int largest = INT_MIN, secondLargest = INT_MIN;

  // Iterate through the array
  for (int i = 0; i < n; i++) {
    // Update largest and second largest if necessary
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i];
    }
  }

  // Return second largest (or -1 if none found)
  return secondLargest;
}

int main() {
  int arr[] = {2, 5, 1, 8, 3, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int secondLargest = findSecondLargest(arr, n);

  if (secondLargest == -1) {
    cout << "Array size is less than 2 or all elements are equal." << endl;
  } else {
    cout << "Second largest element: " << secondLargest << endl;
  }

  return 0;
}
