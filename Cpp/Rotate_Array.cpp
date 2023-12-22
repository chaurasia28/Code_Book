#include <iostream>
#include<vector>
using namespace std;
void rotate(int arr[],int k ,int n)
{
  vector<int>v;
  for(int i=k;i<n;i++)
    {
      v.push_back(arr[i]);
    }
  for(int i=0;i<k;i++)
    {
      v.push_back(arr[i]);
    }
  for(int i=0;i<n;i++)
    {
      cout<<v[i]<<" ";
    }
}
int main()
{
  int arr[100],n;
  int k;
  cout<<"Enter k value"<<endl;
  cin>>k;
  cout<<"Enter the size of the array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  rotate(arr,k,n);
}