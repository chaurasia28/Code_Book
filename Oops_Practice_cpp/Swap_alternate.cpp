/*swap_alternate*/
#include<iostream>
using namespace std;
void swap(int arr[],int a,int b)
{
  int temp=arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}
int main()
{
  int n,arr[100];
  cout<<"Enter size:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i=i+2)
    {
      if(i+1<n)
      {
        swap(arr,i,i+1);
      }
    }
  cout<<"After swap alternate:";
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
}