#include <iostream>
using namespace std;
int parition(int arr[], int s, int e) {
  int pivot = arr[s];
  int count = 0;
  for (int i = s + 1; i <= e; i++) {
    if (arr[i] <= pivot) {
      count++;
    }
  }
  int pivotindex = s + count;
  swap(arr[pivotindex], arr[s]);
  int i = s;
  int j = e;
  while (i < pivotindex && j > pivotindex) {
    while (arr[i] <= pivot) {
      i++;
    }
    while (arr[j] > pivot) {
      j--;
    }
    if (i < pivotindex && j > pivotindex)
      swap(arr[i++], arr[j--]);
  }
  return pivotindex;
}
void quicksort(int arr[], int s, int e) {
  // one element already sorted and start>end whole array get traverse
  if (s >= e)
    return;
  // parition the array and put in correct place
  int pindex = parition(arr, s, e);
  // left side parition
  quicksort(arr, s, pindex - 1);
  // right side parition
  quicksort(arr, pindex + 1, e);
}
int main() {
  int arr[100];
  int n;
  cout << "Enter size of an array" << endl;
  cin >> n;
  cout << "Enter elements of an array" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  quicksort(arr, 0, n - 1);
  cout << "Sorted Element" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}