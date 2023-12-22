/*Sum_of_array_recursion*/
#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
  if(n==0)
  {
    return 0;
  }
  return arr[n-1]+sum(arr,n-1);
}
int main()
{
  int n,arr[100];
  cout<<"Enter size of an array:";
  cin>>n;
  cout<<"Enter elements of an array:";
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
 int ans= sum(arr,n);
  cout<<"Sum of array is:"<<ans<<endl;
}