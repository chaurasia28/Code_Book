#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minprice=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
         minprice=min(minprice,arr[i]);
         maxprofit=max(maxprofit,arr[i]-minprice);
    }
    cout<<maxprofit<<endl;

}