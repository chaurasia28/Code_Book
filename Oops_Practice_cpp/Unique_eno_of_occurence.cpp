/*Uniue element*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swapped(int arr[],int a,int b)
{
  int temp=arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}
int main()
{
  int n,arr[100];
  cout<<"Enter size:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
            swapped(arr,j,j+1);
          }
        }
    }
  int count;
  vector<int>ans;
  for(int i=0;i<n;i=i+count)
    {
       count=1;
      for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
              count++;
            }
        }
       ans.push_back(count);
    }
sort(ans.begin(),ans.end());
  int ans2=0;
  for(int i=0;i<n;i++)
    {
          if(ans[i]==ans[i+1])
          {
            ans2=0;;
          }
          else
          {
            ans2=1;
          }
    }
  if(ans2==1)
  {
    cout<<"True";
  }
  else
  {
    cout<<"False";
  }
}