#include<iostream>
#include<queue>
using namespace std;
int main()
{
    long long n;
    long long cost=0;
    long long arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    while(pq.size()>1)
    {
        long long a=pq.top();
        pq.pop();
        long long b=pq.top();
        pq.pop();
        long long sum=a+b;
        cost+=sum;
        pq.push(sum);
    }
    cout<<cost<<" ";
}