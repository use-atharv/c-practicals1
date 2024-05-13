#include <algorithm>
#include<iostream>
using namespace std;
void reverseArray(int arr[], int n) {
  std::reverse(arr, arr + n);
}
int main (){

  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Reverse using loop
  reverseArray(arr, n);

  // Print the reversed array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Reverse using std::reverse
  reverseArray(arr, n);

  // Print the original array (now reversed again)
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
