/*Search an element in a sorted and rotated Array*/
#include<iostream>
using namespace std;
int getPivot(int arr[],int n)
{
  int s=0;
  int e=n;
  int mid=s+(e-s)/2;
  while(s<e)
   {
  if(arr[mid]>=arr[0])
  {
    s=mid+1;
  }
  else 
  {
    e=mid;
  }
  mid=s+(e-s)/2;
  }
  return s;
}
int binarysearch(int arr[],int s,int e,int key)
{
  int mid=s+(e-s)/2;
  while(s<=e)
    {
      if(arr[mid]==key)
      {
        return mid;
      }
      else if(arr[mid]<key)
      {
        s=mid+1;
      }
      else
      {
        e=mid-1;
      }
      mid=s+(e-s)/2;
    }
  return -1;
}
int main()
{
  int n,arr[100],key,pivot;
  cout<<"Enter size of an array:"<<endl;
  cin>>n;
  cout<<"Enter element of an array:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter key:"<<endl;
  cin>>key;
  pivot=getPivot(arr,n-1);
  if(key>=arr[pivot] && key<=arr[pivot-1])
  {
    int index=binarysearch(arr,pivot,n-1,key);
    cout<<"Found element in index:"<<index<<endl;
  }
  else
  {
    int index=binarysearch(arr,0,pivot,key);
    cout<<"Found element in index:"<<index<<endl;
  }
}