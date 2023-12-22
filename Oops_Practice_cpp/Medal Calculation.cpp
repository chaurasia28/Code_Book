/*Medal Calculation*/
#include<iostream>
using namespace std;
int main()
{
  int noc,n,m,arr1[100][100],arr2[100][100];
  cin>>noc>>n>>m;
  for(int i=0;i<noc;i++)
    {
      for(int j=0;j<3;j++)
        {
          cin>>arr1[i][j];
        }
    }
  for(int i=0;i<noc;i++)
  {
    for(int j=0;j<3;j++)
      {
        cin>>arr2[i][j];
      }
  }
  int sum=0;
  for(int i=0;i<noc;i++)
    {
      for(int j=0;j<3;j++)
        {
          if(i==(n-1) && j==(m-1))
          {
            sum=arr1[i][j]+arr2[i][j];
          }
        }
    }
  cout<<"Total:"<<sum<<endl;
}