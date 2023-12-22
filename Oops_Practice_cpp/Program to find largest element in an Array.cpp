/*Program to find largest element in an Array*/
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"Enter size of an element:";
  cin>>n;
  cout<<"Enter elements:"<<endl;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int max=arr[0];
  for(int i=0;i<n;i++)
    {
      if(max<arr[i])
      {
        max=arr[i];
      }
    }
  cout<<"Largest elements in an array:"<<max<<endl;
}