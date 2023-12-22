#include<iostream>
using namespace std;
int main()
{
  //creation of dynamic memory :2d
  int m;
  cin>>m;
  int col[]={2,4,6};
  int **arr=new int*[m];
  for(int i=0;i<m;i++)
    {
      arr[i]=new int [col[i]];
    }
  //taking input from user
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<col[i];j++)
        {
          cin>>arr[i][j];
        }
    }
  //printing matrix
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<col[i];j++)
        {
          cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
  //release heap memory----array
  for(int i=0;i<col[i];i++)
    {
      delete [] arr[i];
    }
  delete [] arr; 
  return 0;
}