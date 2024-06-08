#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> mergearray(int arr[][100],int k,int n)
{
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans.push_back(arr[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
     int k,n;
     cin>>k>>n;
     int arr[100][100];
     for(int i=0;i<k;i++)
     {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
     }
     vector<int>ans=mergearray(arr,k,n);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
   
}