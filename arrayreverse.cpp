#include <iostream>

using namespace std;

void printArrayReverse(int arr[], int n) {
  // Loop from end to beginning
  for (int i = n - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Array in reverse order: ";
  printArrayReverse(arr, n);

  return 0;
}
