#include<iostream>
using namespace std;
void waveprint(int arr[][3],int m,int n)
{
    for(int j=0;j<n;j++)
    {
       if(j &1)
       {
           for(int i=m-1;i>=0;i--)
           {
             cout<<arr[i][j]<<" ";
           }
       }
      else{
          for(int i=0;i<m;i++)
           {
             cout<<arr[i][j]<<" ";
           }
      }
    }
}
int main()
{
  int m,n;
  int arr[3][3];
  cout<<"Enter size of 2d array"<<endl;
  cin>>m>>n;
  cout<<"Input element"<<endl;
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        {
          cin>>arr[i][j];
        }
    }
  cout<<"array element are"<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        cout<<arr[i][j]<<" ";
      }
    cout<<endl;
  }
  waveprint(arr,m,n);
}