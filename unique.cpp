#include <iostream>
#include <set>

using namespace std;

void printUniqueElements(int arr[], int n) {
  // Create a set to store unique elements
  set<int> uniqueElements;

  // Insert elements from the array into the set (duplicates ignored)
  for (int i = 0; i < n; i++) {
    uniqueElements.insert(arr[i]);
  }

  // Print unique elements from the set
  for (auto it = uniqueElements.begin(); it != uniqueElements.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {2, 5, 1, 2, 8, 7, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Unique elements: ";
  printUniqueElements(arr, n);

  return 0;
}
