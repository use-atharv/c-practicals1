#include <iostream>

using namespace std;

bool insertElement(int arr[], int& size, int capacity, int element, int index) {
  // Handle errors: invalid index, full array, or negative capacity
  if (index < 0 || index > size || capacity <= 0) {
    return false;
  }

  // Check if there's space for insertion (avoid overflow)
  if (size >= capacity) {
    return false;
  }

  // Shift elements one position to the right starting from the insertion index
  for (int i = size; i > index; i--) {
    arr[i] = arr[i - 1];
  }

  // Insert the element at the specified index
  arr[index] = element;

  // Increment size to reflect the new element
  size++;

  return true;
}

int main() {
  int arr[] = {2, 5, 8, 0, 0}; // Pre-allocate space for potential insertion
  int size = 3;
  int capacity = sizeof(arr) / sizeof(arr[0]);

  int elementToInsert = 7;
  int index = 2;

  if (insertElement(arr, size, capacity, elementToInsert, index)) {
    cout << "Element " << elementToInsert << " inserted at index " << index << endl;
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Insertion failed!" << endl;
  }

  return 0;
}
