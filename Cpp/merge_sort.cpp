#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
  int mid=s+(e-s)/2;
  int len1=mid-s+1;
  int len2=e-mid;
  int *first=new int[len1];
  int *second=new int[len2];
  int k;
  //copy the element in first and second array
    k=s;
  for(int i=0;i<len1;i++)
    {
      first[i]=arr[k++];
    }
  k=mid+1;
  for(int i=0;i<len2;i++)
    {
      second[i]=arr[k++];
    }
  int index1=0,index2=0;
   k=s;
  while(index1< len1 && index2< len2)
    {
      if(first[index1]<second[index2])
      {
        arr[k++]=first[index1++];
      }
      else
      {
        arr[k++]=second[index2++];
      }
    }
  while(index1<len1)
    {
       arr[k++]=first[index1++];
    }
  while(index2<len2)
    {
        arr[k++]=second[index2++];
    }
}
void mergesort(int arr[],int s,int e)
{
  int mid=s+(e-s)/2;
  if(s>=e)
  {
    return;
  }
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);
}
int main()
{
  int n;
  int arr[100];
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter element of an array"<<endl;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  mergesort(arr,0,n-1);
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<endl;
}
