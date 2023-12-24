#include<iostream>
using namespace std;
int main()
{
  int arr[100],n,arr2[100],count=0;
  cout<<"Enter size of array:";
  cin>>n;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  for(int i=0;i<n;i++)
    {
      int discount=0;
      for(int j=i+1;j<n;j++)
        {
          if(j>i)
          {
            if(arr[i]>=arr[j])
            {
              discount=arr[j];
              break;
            }
          }
        }
      arr2[count++]=arr[i]-discount;
    }
  for(int i=0;i<n;i++)
    {
      cout<<arr2[i]<<" ";
    }
}