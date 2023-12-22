#include <iostream>
using namespace std;
int main()
{
  int m,n,sum=0,sum1=0;
  int arr[100][100];
  cout<<"Enter m,n "<<endl;
  cin>>m>>n;
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        {
          cin>>arr[i][j];
        }
    }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        cout<<arr[i][j]<<" ";
      }
    cout<<endl;
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        if(i==j)
        {
          sum=sum+arr[i][j];
        }
      }
  }
  cout<<"Diagonal elements sum"<<sum<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        if(i+j==n-1)
        {
          sum1=sum1+arr[i][j];
        }
      }
  }
  cout<<"Diagonal elements sum"<<sum1<<endl;
}