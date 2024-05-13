#include <iostream>

bool isPrime(int num) {
  if (num <= 1) {
    return false; // 1 or less are not prime
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false; // Divisible by a number other than 1 and itself
    }
  }
  return true; // Prime number
}

int countPrimes(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (isPrime(arr[i])) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {2, 4, 6, 7, 8, 11, 13, 15};
  int size = sizeof(arr) / sizeof(arr[0]);

  int primeCount = countPrimes(arr, size);

  std::cout << "Number of prime numbers in the array: " << primeCount << std::endl;

  return 0;
}
