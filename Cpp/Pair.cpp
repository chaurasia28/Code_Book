#include <iostream>
using namespace std;
int main()
{
  int n,count=0;
  int arr[1000],target;
  cout<<"Enter n size"<<endl;
  cin>>n;
  cout<<"Enter target number"<<endl;
  cin>>target;
  cout<<"Enter elements of an array"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j+1]==target)
        {
          count++;
        }
      }
    }
  cout<<"Pair"<<count<<endl;
}