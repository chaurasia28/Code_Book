#include <iostream>
using namespace std;
char tolower(char ch, int len) {
  if (ch >= 'a' && ch <= 'z') {
    return ch;
  } else {
    return ch - 'A' + 'a';
  }
}
int Palindrome(string name, int len) {
  string temp = "";
  for (char i : name) {
    temp += tolower(i);
  }
  int s = 0;
  int e = len - 1;
  while (s < e) {
    if (temp[s] != temp[e]) {
      return 0;
    } else {
      s++;
      e--;
    }
  }
  return 1;
}
int length(string name) {
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}
int main() {
  string name;
  cout << "Enter Your Name" << endl;
  cin >> name;
  // Finding the length of an name
  int len = length(name);
  int pal = Palindrome(name, len);
  cout << "palindrome-->>" << pal << endl;
  return 0;
}