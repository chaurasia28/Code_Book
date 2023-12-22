/*Uniue element*/
#include<iostream>
using namespace std;
int main()
{
  int n,arr[100];
  cout<<"Enter size:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int ans=0;
  for(int i=0;i<n;i++)
    {
      ans=ans^arr[i];
    }
cout<<"Unique Element:"<<ans<<endl;
}