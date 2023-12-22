/*Program to multiply two matrices*/
#include <iostream>
using namespace std;
int main() {
  int m1, n1, m2, n2;
  int arr1[100][100], arr2[100][100];
  cout << "Enter row and column:" << endl;
  cin >> m1 >> n1;
  cout << "Enter elements:";
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n1; j++) {
      cin >> arr1[i][j];
    }
  }
  cout << "Enter row and column:" << endl;
  cin >> m2 >> n2;
  cout << "Enter elements:";
  for (int i = 0; i < m2; i++) {
    for (int j = 0; j < n2; j++) {
      cin >> arr2[i][j];
    }
  }
  //Remember for multiplication column of first matrix must be equal to row of second matrix...!!
  if (n1 != m2) {
    cout << "Elements cannot be multiply!!" << endl;
  } else {
    int sum[100][100];
    for (int i = 0; i < m1; i++) {
      for (int j = 0; j < n2; j++) {
        for (int k = 0; k < n1; k++) {
          sum[i][j] = sum[i][j] + arr1[i][k] * arr2[k][j];
        }
      }
    }
    cout << "After Multiplication:" << endl;
    for (int i = 0; i < m1; i++) {
      for (int j = 0; j < n2; j++) {
        cout << sum[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}