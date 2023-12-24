/*You are given a string s representing an attendance record for a student where
each character signifies whether the student was absent, late, or present on
that day. The record only contains the following three characters: 'A': Absent.
'L': Late.
'P': Present.
The student is eligible for an attendance award if they meet both of the
following criteria: The student was absent ('A') for strictly fewer than 2 days
total. The student was never late ('L') for 3 or more consecutive days. Return
true if the student is eligible for an attendance award, or false otherwise. */
#include <iostream>
using namespace std;
bool checkRecord(string str) {
  int l = 0, a = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'A') {
      a = a + 1;
      l = 0;
    } else if (str[i] == 'L') {
      l = l + 1;
    } else {
      l = 0;
    }
    if (a >= 2 || l >= 3) {
      return false;
    }
  }
  return true;
}
int main() {
  string str;
  cin >> str;
  if (checkRecord(str)) {
    cout << "True";
  } else {
    cout << "False";
  }
}
