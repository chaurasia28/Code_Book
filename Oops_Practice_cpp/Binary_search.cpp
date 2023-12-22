/*Binary Search*/
#include<iostream>
using namespace std;
int Binary_search(int arr[],int s,int n,int key)
{
  int e=n-1;
  int mid=s+(e-s)/2;
  if(s>e)
  {
    //if size is zero no element is present
      return false;
  }
  if(arr[mid]==key)
  {
    return true;
  }
  else if(arr[mid]<key)
  {
     return Binary_search(arr,mid+1,n,key);
  }
  else
  {
    return Binary_search(arr,s,mid-1,key);
  }
}
int main()
{
  int n,key;
  int arr[100];
  cout<<"Enter size of an array:";
  cin>>n;
  cout<<"Enter array elements:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter key:";
  cin>>key;
  if(Binary_search(arr,0,n,key))
  {
    cout<<"Found";
  }
  else
  {
    cout<<"Not Found";
  }
}