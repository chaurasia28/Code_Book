/*Return duplicate number*/
#include <iostream>
using namespace std;
int main() {
  int t;
  cout << "Enter test case:";
  cin >> t;
  while (t--) {
    int n, arr[100], ele;
    cout << "Enter size of an array:";
    cin >> n;
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (arr[i] == arr[j]) {
          ele = arr[i];
        }
      }
    }
    cout << "Duplicate Number:" << ele << endl;
  }
  return 0;
}