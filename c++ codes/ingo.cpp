#include <iostream>

int main() {
  int rows, cols;
  std::cout << "Enter the number of rows and columns: ";
  std::cin >> rows >> cols;

  int matrix[rows][cols];

  // Take input for the matrix
  std::cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      std::cin >> matrix[i][j];
    }
  }

  // Search for a negative number
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] < 0) {
        std::cout << "Found a negative number at (" << i << ", " << j << ")" << std::endl;
        return 0;
      }
    }
  }

  std::cout << "No negative numbers found." << std::endl;

  return 0;
}
