#include <iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int a, int b) {
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (arr[i][j] == target)
        return 1;
    }
  }
  return 0;
}
int main() {
  int arr[3][4];
  int target;
  printf("Taking input row wise\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }
  printf("Printing 2Darray\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Enter search element\n";
  cin >> target;
  if (ispresent(arr, target, 3, 4)) {
    cout << "Element Found\n" << endl;
  } else {
    cout << "Element not Found\n" << endl;
  }
  return 0;
}