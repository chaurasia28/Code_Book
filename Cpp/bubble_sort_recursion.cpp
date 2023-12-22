#include<iostream>
using namespace std;
void bubble_Sort(int arr[],int size)
{
  //Base condition
  if(size==0||size==1)
     return ;//already sorted;
  //processing
  for(int i=0;i<size-1;i++)
    {
      if(arr[i]>arr[i+1])//kept first largest element in RHS only first case
        swap(arr[i],arr[i+1]);
    }
  //recursion call
  return bubble_Sort(arr,size-1);
}
int main()
{
  int n,arr[100];
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter element of an array"<<endl;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  bubble_Sort(arr,n);
  
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
  return 0;
}