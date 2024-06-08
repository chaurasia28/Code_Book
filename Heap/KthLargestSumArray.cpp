//We have given a array of n length. We need to find the sum of subbarray  and tell the largest kth  element.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int klargestsubarraysum(int *arr,int n,int k)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            ans.push_back(sum);
        }
    }
    sort(ans.begin(),ans.end());
    return ans[ans.size()-k];
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<"Kth Largest Subarray sum:"<<klargestsubarraysum(arr,n,k);
}