#include<iostream>
using namespace std;
void print(int arr[],int s,int e)
{ 
  cout<<"Binary_search"<<endl;
  for(int i=s;i<=e;i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<endl;
}
bool binary_search(int arr[],int s,int e,int key)
{
  print(arr,s,e);
  //key not found--Base Case
  if(s>e)
    return false;
  int mid=s+(e-s)/2;
  cout<<"mid ele"<<arr[mid]<<endl;
  //key found--Base Case
  if(arr[mid]==key)
    return true;
  if(arr[mid]<key){
     return binary_search(arr,mid+1,e,key);
  }
  else{
     return  binary_search(arr,s,mid-1,key);
  }
}
int main()
{
  int arr[100];
  int n,e,key;
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  e=n-1;
  cout<<"Enter elements of an array"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  cout<<"Enter key"<<endl;
  cin>>key;
  int result=binary_search(arr,0,e,key);
  if(result)
    cout<<"Found"<<endl;
  else
    cout<<"Not Found"<<endl;
  return 0;
}