// 4. Write a program to insert string and display the length of
// string.

#include <iostream>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;
  int length = str.length();
  cout << "Length of string: " << length << endl;
  return 0;
}