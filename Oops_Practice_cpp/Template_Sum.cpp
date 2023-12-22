#include <iostream>
using namespace std;
template <typename T> T add(T a, T b) { return a + b; }
int main() {
  int a, b;
  double c, d;
  cout << "Enter a and b:";
  cin >> a >> b;
  cout << "Enter a and d:";
  cin >> c >> d;
  cout << "Sum is:" << add<int>(a, b) << endl;
  cout << "Sum is:" << add<double>(c, d) << endl;
}