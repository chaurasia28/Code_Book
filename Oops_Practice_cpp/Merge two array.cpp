/*Merge two array*/
#include <iostream>
using namespace std;
void mergearr(int arr[], int brr[], int n1, int n2) {
  int i = 0, j = 0;
  while (i < n1 && j < n2) {
    if (arr[i] < brr[j]) {
      cout << arr[i] << " ";
      i++;
    } else {
      cout << brr[j] << " ";
      j++;
    }
  }
  while (i < n1) {
    cout << arr[i] << " ";
    i++;
  }
  while (j < n2) {
    cout << brr[j] << " ";
    j++;
  }
}
int main() {
  int n1, n2, arr[100], brr[100];
  cout << "Enter size of an array:";
  cin >> n1;
  cout << "Enter elements of an array:";
  for (int i = 0; i < n1; i++) {
    cin >> arr[i];
  }
  cout << "Enter size of another array:";
  cin >> n2;
  for (int i = 0; i < n2; i++) {
    cin >> brr[i];
  }
  mergearr(arr, brr, n1, n2);
}