#include<iostream>
#include<algorithm>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void print(int *arr, int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void heapsort(int *arr,int n)
{
    int t=n;
    while(t>1)
    {
        swap(arr[1],arr[t]);
        t--;
        heapify(arr,t,1);
    }
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    arr[100]=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    heapsort(arr,n);
    print(arr,n);

}