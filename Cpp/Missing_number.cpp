#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int n,sum=0,exp_sum;
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter Elements of an array"<<endl;
  for(int i=0;i<n-1;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
  {
   sum=sum+arr[i]; 
  }
  exp_sum=(n*(n+1))/2;
  cout<<"Missing number :"<<exp_sum-sum<<endl;
}