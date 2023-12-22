#include <iostream>
using namespace std;
void myfunc(int a, int b) throw(int, int) {
  if (a <= 0) {
    throw(a);
  } else if (b >= 100) {
    throw(b);
  } else {
    cout << "Sum is:" << a + b << endl;
  }
}
int main() {
  try {
    myfunc(20, 100);
  } catch (int x) {
    cout << "Value is :" << x << endl;
  }
}