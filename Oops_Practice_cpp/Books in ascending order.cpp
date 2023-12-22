/*Bubble Sort*/
#include<iostream>
using namespace std;
void swapped(int arr[],int a,int b)
{
  int temp=arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}
int main()
{
  int n;
  cout<<"Enter size of an array:";
  cin>>n;
  int arr[100];
  cout<<"Enter elements of an array:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
            swapped(arr,j,j+1);
          }
        }
    }
  cout<<"Sorted Array is:";
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
}