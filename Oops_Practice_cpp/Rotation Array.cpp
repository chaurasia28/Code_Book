/*Check rotation of array*/
#include<iostream>
using namespace std;
int main()
{
  int n,index,arr[100];
  cout<<"Enter size of an array:";
  cin>>n;
  cout<<"Enter elements of an array:";
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int min=arr[0];
  for(int i=0;i<n;i++)
    {
      if(min>arr[i])
      {
        min=arr[i];
        index=i;
      }
    }
  cout<<"Rotation of array by Kth term:"<<index<<endl;
}