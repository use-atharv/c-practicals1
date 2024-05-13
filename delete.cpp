#include <iostream>

using namespace std;

bool deleteElement(int arr[], int& size, int index) {
  // Function explained previously (refer to the explanation above)

  // Implement error handling and deletion logic here
}

int main() {
  int arr[] = {2, 5, 1, 8, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int elementToDeleteIndex = 2; // Index of the element to delete

  if (deleteElement(arr, size, elementToDeleteIndex)) {
    cout << "Element at index " << elementToDeleteIndex << " deleted successfully." << endl;
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Deletion failed!" << endl;
  }

  return 0;
}
