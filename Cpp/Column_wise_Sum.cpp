#include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int m,n;
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
  int sum=0,j;
  for(int i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      {
        sum=sum+arr[j][i];
      }
    cout<<"Sum Column wise"<<i<<" "<<sum<<endl;
  }
  
}