/*Program to find sum of elements in a given array*/
#include<iostream>
using namespace std;
int main()
{
  int arr[100],n,sum=0;
  cout<<"Enter size of an array:"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
  cout<<"Sum of an array:"<<sum<<endl;
}