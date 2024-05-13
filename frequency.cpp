#include <iostream>
#include <unordered_map>

using namespace std;

void countFrequency(int arr[], int n) {
  // Create an unordered_map to store element-frequency pairs
  unordered_map<int, int> frequency;

  // Iterate through the array and update frequencies in the map
  for (int i = 0; i < n; i++) {
    frequency[arr[i]]++;
  }

  // Print element and its frequency
  for (auto it = frequency.begin(); it != frequency.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
  }
}

int main() {
  int arr[] = {5, 2, 8, 5, 2, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  countFrequency(arr, n);

  return 0;
}
