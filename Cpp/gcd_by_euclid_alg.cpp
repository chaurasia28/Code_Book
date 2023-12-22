#include <iostream>
int gcd(int a, int b) {
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  return a;
}
using namespace std;
int main() {
  int a, b;
  int ans;
  cout << "Enter two number a and b" << endl;
  cin >> a >> b;
  ans = gcd(a, b);
  cout << "gcd of" << a << "and" << b << "-->>" << ans;
  return 0;
}