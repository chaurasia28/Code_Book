#include<iostream>
using namespace std;
int main()
{
  //creation of dynamic memory :2d
  int m,n;
  cin>>m>>n;
  int **arr=new int*[m];
  for(int i=0;i<m;i++)
    {
      arr[i]=new int [n];
    }
  //taking input from user
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        {
          cin>>arr[i][j];
        }
    }
  //printing matrix
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        {
          cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
  //release heap memory----array
  for(int i=0;i<n;i++)
    {
      delete [] arr[i];
    }
  delete [] arr; 
  return 0;
}