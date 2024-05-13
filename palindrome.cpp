#include <iostream>

bool isPalindrome(int arr[], int size) {
  // Handle base cases: empty array or single element
  if (size <= 1) {
    return true;
  }

  // Compare elements from beginning and end
  for (int i = 0; i < size / 2; i++) {
    if (arr[i] != arr[size - i - 1]) {
      return false;
    }
  }

  return true;
}

int main() {
  int arr[] = {1, 2, 3, 2, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  if (isPalindrome(arr, size)) {
    std::cout << "The array is a palindrome." << std::endl;
  } else {
    std::cout << "The array is not a palindrome." << std::endl;
  }

  return 0;
}
