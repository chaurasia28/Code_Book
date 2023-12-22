/*Spiral Print*/
#include <iostream>
using namespace std;
int main() {
  int m, n;
  cout << "Enter no of row and column:" << endl;
  cin >> m >> n;
  int arr[4][4];
  cout << "Enter the elements of an array:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int row=m;
  int col=n;
  int total=row*col;
  int count=0;
  int startingrow=0;
  int startingcol=0;
  int endingrow=row-1;
  int endingcol=col-1;
  while(count<total)
    {
      //startingrow
      for(int i=startingcol;i<=endingcol && count<total;i++)
        {
          cout<<arr[startingrow][i]<<" ";
        }
      count++;
      startingrow++;
      //endingcol
      for(int i=startingrow;i<=endingrow && count<total;i++)
        {
          cout<<arr[i][endingcol]<<" ";
        }
      count++;
      endingcol--;
      //endingrow
      for(int i=endingcol;i>=startingcol && count<total;i--)
        {
          cout<<arr[endingrow][i]<<" ";
        }
      count++;
      endingrow--;
      //startingcol
      for(int i=endingrow;i>=startingrow && count<total;i--)
        {
          cout<<arr[i][startingcol]<<" ";
        }
      count++;
      startingcol++;
    }
}