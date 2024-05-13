#include <iostream>

void negatePositives(int arr[], int size) {
  // Iterate through the array
  for (int i = 0; i < size; i++) {
    // Check if the element is positive (greater than 0)
    if (arr[i] > 0) {
      // Negate the element (multiply by -1)
      arr[i] *= -1;
    }
  }
}

int main() {
  int arr[] = {2, -5, 1, 8, 3, -6, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Original array: ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  negatePositives(arr, size);

  std::cout << "Array after negating positive numbers: ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
