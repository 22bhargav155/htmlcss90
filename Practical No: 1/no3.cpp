// 3. Write a program to insert string. Display each character in
// different lines.

#include <iostream>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    cout << str[i] << endl;
  }
  return 0;
}