#include <iostream>
using namespace std;
int sum(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  return sum;
}
int main() {
  int n, ans = 0;
  cout << "Enter size of an array" << endl;
  cin >> n;
  int *arr = new int[n];
  cout << "Enter elements of an array" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  ans = sum(arr, n);
  cout << "result-->>" << ans << endl;
  //delete []arr;
  return 0;
}