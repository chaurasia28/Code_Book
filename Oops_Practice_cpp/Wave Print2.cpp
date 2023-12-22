/*Wave Print*/
#include <iostream>
using namespace std;
int main() {
  int m, n;
  cout << "Enter no of row and column:" << endl;
  cin >> m >> n;
  int arr[100][100];
  cout << "Enter the elements of an array:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i< n; i++) {
    if (i % 2 == 0) {
      // even--left to right;
      for (int j= 0; j < m; j++) {
        cout << arr[i][j] << " ";
      }
    } else {
      for (int j= n - 1; j>= 0; j--) {
        cout << arr[i][j] << " ";
      }
    }
  }
}