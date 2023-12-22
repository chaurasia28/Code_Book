#include <iostream>
using namespace std;
int duplicate(int arr[],int n)
{
  int ans;
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            ans=arr[i];
            break;
          }
        }
    }
  return ans;
}
int main()
{
  int t,n;
  int arr[1000];
  cout<<"Number of test cases"<<endl;
  cin>>t;
  while(t--)
    {
      cout<<"Enter size of an array"<<endl;
      cin>>n;
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
       int result=duplicate(arr,n);
      cout<<"Duplicate Number"<<result<<endl;
    }

}