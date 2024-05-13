#include <iostream>
#include <stack>

void findNearestLarger(int arr[], int n, int result[]) {
  std::stack<int> s;

  // Initialize result with -1 (no larger element to the right)
  for (int i = 0; i < n; i++) {
    result[i] = -1;
  }

  // Iterate through the array from right to left
  for (int i = n - 1; i >= 0; i--) {
    // Pop elements from the stack while the current element is larger
    while (!s.empty() && arr[i] >= arr[s.top()]) {
      s.pop();
    }

    // If the stack is not empty, the top element is the nearest larger element
    if (!s.empty()) {
      result[i] = arr[s.top()];
    }

    // Push the current element onto the stack for future comparisons
    s.push(i);
  }
}

int main() {
  int arr[] = {4, 1, 3, 2, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int result[n];

  findNearestLarger(arr, n, result);

  std::cout << "Array: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Nearest larger element to the right: ";
  for (int i = 0; i < n; i++) {
    std::cout << result[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
