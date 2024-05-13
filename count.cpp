#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5}; // Replace with your desired array
  int n = sizeof(arr) / sizeof(arr[0]); // Get the array size

  int even_count = 0;
  int odd_count = 0;

  // Loop through the array
  for (int i = 0; i < n; i++) {
    // Check if even using modulo operator
    if (arr[i] % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
  }

  // Print the counts
  cout << "Even numbers: " << even_count << endl;
  cout << "Odd numbers: " << odd_count << endl;

  return 0;
}
