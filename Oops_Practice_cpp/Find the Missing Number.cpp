/*Find the Missing Number*/
#include<iostream>
using namespace std;
int main()
{
  int n,arr[100];
  cout<<"Enter size of an array:"<<endl;
  cin>>n;
  cout<<"Enter element of an array:"<<endl;
  for(int i=0;i<n-1;i++)
    {
      cin>>arr[i];
    }
  int sum=0;
  for(int i=0;i<n-1;i++)
    {
      sum=sum+arr[i];
    }
  int exp_sum=n*(n+1)/2;
  cout<<"Missing Number:"<<exp_sum-sum<<endl;
}