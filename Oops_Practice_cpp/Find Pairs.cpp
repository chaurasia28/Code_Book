/*Find Pairs*/
#include<iostream>
using namespace std;
int main()
{
  int n,arr[100],key;
  cout<<"Enter size of an array:"<<endl;
  cin>>n;
  cout<<"Enter elements of an array:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter Key:";
  cin>>key;
  int count=0;
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(arr[i]+arr[j]==key)
          {
            count=count+1;
          }
        }
    }
  cout<<"Count :"<<count<<endl;
}