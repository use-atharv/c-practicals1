#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to merge two unsorted arrays
vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
  vector<int> merged(arr1.size() + arr2.size()); // Create a new vector for the merged elements
  int i = 0, j = 0, k = 0;

  // Merge elements while both arrays have elements
  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] <= arr2[j]) {
      merged[k++] = arr1[i++];
    } else {
      merged[k++] = arr2[j++];
    }
  }

  // Copy remaining elements from the first array (if any)
  while (i < arr1.size()) {
    merged[k++] = arr1[i++];
  }

  // Copy remaining elements from the second array (if any)
  while (j < arr2.size()) {
    merged[k++] = arr2[j++];
  }

  return merged;
}

int main() {
  vector<int> arr1 = {6, 5, 2, 1};
  vector<int> arr2 = {8, 3, 10, 9};

  cout << "Array 1: ";
  for (int num : arr1) {
    cout << num << " ";
  }
  cout << endl;

  cout << "Array 2: ";
  for (int num : arr2) {
    cout << num << " ";
  }
  cout << endl;

  vector<int> merged = mergeArrays(arr1, arr2);

  cout << "Merged Array: ";
  for (int num : merged) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
