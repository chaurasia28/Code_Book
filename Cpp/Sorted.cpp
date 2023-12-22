#include <iostream>
using namespace std;
void sort(int arr[],int n)
{
  //increment index value
  for(int i=0;i<n-1;i++)
    {
      //comparing two value
     for(int j=i;j<n-1;j++) {
        if(arr[i]>arr[j+1])
        {
           int temp=arr[i];
           arr[i]=arr[j+1];
           arr[j+1]=temp;
        }
     }
    }
}
int main()
{
  int n;
  int arr[1000];
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter elements of an array"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,n);
  cout<<"After Sorting"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}