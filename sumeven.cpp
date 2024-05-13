#include <iostream>

using namespace std;

int sumEvenNumbers(int arr[], int n) {
  int sum = 0;

  // Iterate through the array
  for (int i = 0; i < n; i++) {
    // Check if the current element is even (remainder 0 when divided by 2)
    if (arr[i] % 2 == 0) {
      sum += arr[i]; // Add even element to the sum
    }
  }

  return sum;
}

int main() {
  int arr[] = {2, 5, 1, 8, 3, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int evenSum = sumEvenNumbers(arr, n);

  cout << "Sum of even numbers in the array: " << evenSum << endl;

  return 0;
}
