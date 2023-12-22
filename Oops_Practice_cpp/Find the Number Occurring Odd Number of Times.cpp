/*Find the Number Occurring Odd Number of Times*/
#include<iostream>
using namespace std;
int main()
{
  int n,arr[100];
  cout<<"Enter size of an array:"<<endl;
  cin>>n;
  cout<<"Enter elements of an array:"<<endl;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int max_count=0;
  int ele;
  for(int i=0;i<n;i++)
    {
      int count=0;
      for(int j=0;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
           count=count+1;
          }
        }
      if(count%2!=0)
      {
         max_count=count;
         ele=arr[i];
      }
    }
  cout<<"Number occuring odd number of time:"<<ele<<endl;
}