/*Linear Search*/
#include<iostream>
using namespace std;
bool linear_search(int arr[],int n,int key)
{
  if(n==0)
  {
    //if no element is present then size is zero
    return false;
  }
  if(arr[0]==key)
  {
    return true;
  }
  return linear_search(arr+1,n-1,key);
}
int main()
{
  int n,arr[100],key;
  cout<<"Enter size of an array:";
  cin>>n;
  cout<<"Enter elements of an array:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter key:";
  cin>>key;
  if(linear_search(arr,n,key))
  {
    cout<<"Found"<<endl;
  }
  else
  {
    cout<<"Not Found"<<endl;
  }

}