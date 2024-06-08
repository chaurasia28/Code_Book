//For building a heap time complexity is O(N) but if we insert each element one by one then it is O(Nlogn).
//Count Leaf start from (n/2+1) to (n) there fore they are themselves making an heap no need to process.
//we nee to process form n/2 to 0 if 1 base indexing
#include<iostream>
using namespace std;
void heapify(int *arr,int n,int i)
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
      swap(arr[largest],arr[i]);
      heapify(arr,largest,i);
   }
}
void print(int *arr,int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[100];
    int n;
    cin>>n;
    arr[0]=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    print(arr,n);
    return 0;
}