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
  for (int j = 0; j < n; j++) {
    if (j % 2 == 0) {
      // even--top to bottom;
      for (int i = 0; i < m; i++) {
        cout << arr[i][j] << " ";
      }
    } else {
      for (int i = n - 1; i >= 0; i--) {
        cout << arr[i][j] << " ";
      }
    }
  }
}