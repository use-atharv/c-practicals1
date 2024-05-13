#include <iostream>

void squareArray(int arr[], int size) {
  // Iterate through the array and square each element
  for (int i = 0; i < size; i++) {
    arr[i] *= arr[i]; // Square the element in-place
  }
}

int main() {
  int arr[] = {2, 5, 1, 8, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Original array: ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  squareArray(arr, size);

  std::cout << "Array after squaring elements: ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

