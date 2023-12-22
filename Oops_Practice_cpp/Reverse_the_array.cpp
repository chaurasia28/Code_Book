/*Reverse the array*/
#include <iostream>
using namespace std;
int main() {
  int n, arr[100];
  cout << "Enter size of an array:" << endl;
  cin >> n;
  cout << "Enter element of an array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Before reversing the array:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "After reversing the array:" << endl;
  for (int i = n - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
}