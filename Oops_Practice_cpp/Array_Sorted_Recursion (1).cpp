/*Check whether array is sorted or not*/
#include<iostream>
using namespace std;
bool check_sort_array(int arr[],int n)
{
  if(n==0 ||n==1)
  {
    return true;
  }
  if(arr[0]>arr[1])
  {
    return false;
  }
  //array index increase,size decrease
  return check_sort_array(arr+1,n-1);
}
int main()
{
  int n,arr[100];
  cout<<"Enter size of an array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  if(check_sort_array(arr,n))
  {
    cout<<"Sorted";
  }
  else
  {
    cout<<"Not sorted";
  }
}