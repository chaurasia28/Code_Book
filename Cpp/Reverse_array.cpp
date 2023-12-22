#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int n;
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter Array elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"After Reversing Array"<<endl;
  for(int i=n-1;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }
  
}