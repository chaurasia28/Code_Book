#include<iostream>
using namespace std;
bool linear_search(int arr[],int n,int key)
{
  if(n==0)
    return false;
  if(arr[0]==key)
    return true;
  else
  {
    bool ans=linear_search(arr+1,n-1,key);
    return ans; 
  }
}
int main()
{
  int n,key,result;
  int arr[100];
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  cout<<"Enter key"<<endl;
  cin>>key;
  result=linear_search(arr,n,key);
  if(result)
    cout<<"Found"<<endl;
  else
    cout<<"Not Found"<<endl;
}