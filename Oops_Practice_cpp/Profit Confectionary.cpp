/*Profit Confectionary*/
#include <iostream>
using namespace std;
int main() {
  int m, n;
  cout << "Enter row and columns:";
  cin >> m >> n;
  int arr[100][100];
  cout << "Enter elements of an array:";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int flag;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == arr[0][0]) {
        flag = true;
      } else {
        flag = false;
      }
    }
  }
  if (flag == true) {
    cout << "True";
  } else {
    cout << "False";
  }
}