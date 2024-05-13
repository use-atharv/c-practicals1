#include <iostream>

using namespace std;

int sumOddNumbers(int arr[], int n) {
  int sum = 0;

  // Iterate through the array
  for (int i = 0; i < n; i++) {
    // Check if the current element is odd (remainder 1 when divided by 2)
    if (arr[i] % 2 != 0) {
      sum += arr[i]; // Add odd element to the sum
    }
  }

  return sum;
}

int main() {
  int arr[] = {2, 5, 1, 8, 3, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int oddSum = sumOddNumbers(arr, n);

  cout << "Sum of odd numbers in the array: " << oddSum << endl;

  return 0;
}
