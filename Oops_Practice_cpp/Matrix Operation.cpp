/*Matrix Operations*/
#include <iostream>
using namespace std;
int main() {
  int m, n, arr[100][100];
  cout << "Enter row an d column:";
  cin >> m >> n;
  cout << "Enter the elements:";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  cout << "Array elements:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == 0) {
        for (int j = 0; j < n; j++) {
          arr[i][j] = 0;
        }
        break;
      }
    }
  }
  cout << "Array elements:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}