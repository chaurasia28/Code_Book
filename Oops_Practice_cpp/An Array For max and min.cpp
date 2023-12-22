/*An Array For max and min*/
#include <iostream>
using namespace std;
int find_max(int arr[], int n) {
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int find_min(int arr[], int n) {
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}
int main() {
  int n;
  int arr[100];
  int ch;
  cout << "Enter size of an array:" << endl;
  cin >> n;
  cout << "Enter elements of an array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout<<"Enter Choice:";
  cin>>ch;
  if (ch == 1) {
    int ans = find_min(arr, n);
    cout << "Minimum Number:" << ans << endl;
  } else {
    int ans = find_max(arr, n);
    cout << "Minimum Number:" << ans << endl;
  }
}