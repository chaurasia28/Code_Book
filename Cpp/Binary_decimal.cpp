#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n number" << endl;
  cin >> n;
  int i = 0, sum = 0;
  while (n > 0) {
    int rem = n % 10;
    sum = sum + (rem * pow(2, i));
    n = n / 10;
    i++;
  }
  cout << "Decimal Number:" << sum << endl;
}