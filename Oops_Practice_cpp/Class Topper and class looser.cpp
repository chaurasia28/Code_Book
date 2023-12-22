#include <iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"Enter size of an array:";
  cin>>n;
  cout<<"Enter elements of an array:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int max=arr[0];
  int second_max=arr[0]>arr[1]?arr[1]:arr[0];
  for(int i=0;i<n;i++)
    {
      if(max<arr[i])
      {
        second_max=max;
        max=arr[i];
      }
      else if(second_max<arr[i] && max!=arr[i])
      {
        second_max=arr[i];
      }
    }
  int min=arr[1];
  int second_min=arr[1]>arr[0]?arr[0]:arr[1];
  {
    for(int i=0;i<n;i++)
      {
        if(min>arr[i])
        {
          second_min=min;
          min=arr[i];
        }
        else if(second_min>arr[i] && min!=arr[i])
        {
          second_min=min;
        }
      }
  }
  cout<<"Difference:"<<second_max-second_min;
}