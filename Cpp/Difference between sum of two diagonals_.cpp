#include<iostream>
using namespace std;
int main()
{
  int m,n,arr[100][100],sum1=0,sum2=0;
  cout<<"Enter no of row and column array:";
  cin>>m>>n;
  cout<<"Enter elements of an array:";
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
           if(i==j)
           {
             sum1=sum1+arr[i][j];
           }
         }
     }
  for(int i=0;i<m;i++)
   {
     for(int j=0;j<n;j++)
       {
         if(i+j==m-1)
         {
           sum2=sum2+arr[i][j];
         }
       }
   }
  cout<<"Difference between sum of two diagonals:"<<abs(sum1-sum2);
}