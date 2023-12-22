/*Rotate the array*/
#include <iostream>
using namespace std;
int main() {
  int n, k;
  cout << "Enter size of an array:";
  cin >> n;
  int arr[100];
  cout << "Enter elements of an array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter k value:" << endl;
  cin >> k;
  cout << "After right rotation:";
  for (int i = n - k; i < n; i++) {
    cout << arr[i] << " ";
  }
  for (int i = 0; i < n - k; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "After right rotation:";
  for (int i = k; i < n; i++) {
    cout << arr[i] << " ";
  }
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}