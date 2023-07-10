#include <iostream>

using namespace std;

int search_value(int* array, int size, int value) {
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      return i;
    }
  }
  return -1;
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(array) / sizeof(array[0]);
  int value = 5;
  int index = search_value(array, size, value);
  if (index == -1) {
    cout << "Value not found" << endl;
  } else {
    cout << "Value found at index: " << index << endl;
  }
  return 0;
}