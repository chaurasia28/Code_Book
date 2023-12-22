/*Majority Element*/
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"Enter size of an array:"<<endl;
  cin>>n;
  cout<<"Enter elements of an array:"<<endl;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int count;
  int ele;
  int max_count=0;
  for(int i=0;i<n;i++)
    {
      count=0;
      for(int j=0;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            count=count+1;
          }
        }
       if(count>max_count)
       {
         max_count=count;
         ele=arr[i];
       }
    }
  if(max_count>n/2)
  {
    cout<<"Majority Element"<<ele<<endl;
  }
  else
  {
    cout<<"No Majority Element"<<endl;
  }
  return 0;
}