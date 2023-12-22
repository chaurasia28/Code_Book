/*Morning Queue*/
#include <iostream>
using namespace std;
void max_ele(int arr[], int n) {
  int max = arr[0];
  int second_max = arr[0] > arr[1] ? arr[1] : arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      second_max = max;
      max = arr[i];
    } else if (second_max < arr[i] && arr[i] != max) {
      second_max = arr[i];
    }
  }
  cout << "Maximum element:" << max << endl;
  cout << "Second maximum element:" << second_max << endl;
}
int main() {
  int n, arr[100];
  cout << "Enter size of an array:";
  cin >> n;
  cout << "Elements of an array:";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  max_ele(arr, n);
}