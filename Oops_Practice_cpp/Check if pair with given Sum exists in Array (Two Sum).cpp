/*Check if pair with given Sum exists in Array (Two Sum)*/
#include <iostream>
using namespace std;
int main() {
  int n, arr[100], find;
  bool flag;
  cout << "Enter size of an array:" << endl;
  cin >> n;
  cout << "Enter elements of an array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter sum that you need to find :" << endl;
  cin >> find;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] + arr[j] == find) {
        flag = true;
      } else {
        flag = false;
      }
    }
  }
  if (flag == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}