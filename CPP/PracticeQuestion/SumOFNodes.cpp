//Sum of all nodes:
#include<iostream>
using namespace std;
int  sumofnodes(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
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
    cout<<"Sum of all nodes:"<<sumofnodes(arr,n)<<endl;
}