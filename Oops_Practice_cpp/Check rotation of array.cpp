/*Check rotation of array*/
#include<iostream>
using namespace std;
int main()
{
  int n,arr[100];
  cout<<"Enter size of an array:";
  cin>>n;
  cout<<"Enter elements of an array:";
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int count=0;
  for(int i=1;i<n;i++)
    {
       //cout<<i<<" "<<count<<endl;
      if(arr[i]<arr[i-1])
      { 
        count=i;
        break;
      }
    }
cout<<"Number of rotations required to sort the array:"<<count<<endl;}