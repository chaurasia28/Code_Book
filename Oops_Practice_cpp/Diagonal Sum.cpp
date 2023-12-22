/*Diagonal Sum*/
#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"Enter no of row and column:"<<endl;
  cin>>m>>n;
  int arr[100][100];
  cout<<"Enter the elements of an array:"<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
  }
  int sum=0;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        if(i==j)
        {
        sum=sum+arr[i][j];
        }
        if(i+j==m-1)
        {
          sum=sum+arr[i][j];
        }
      }
  }
  if(n%2==1)
  {
    sum=sum-arr[n/2][n/2];
  }
  cout<<"Sum of Diagonal Elements:"<<sum<<endl;
}