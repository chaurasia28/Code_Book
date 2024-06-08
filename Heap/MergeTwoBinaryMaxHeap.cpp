//You need merge two binary tree then convert into maxheap
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void heapify(vector<int>&arr3,int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr3[largest]<arr3[left])
    {
        largest=left;
    }
    if(right<n && arr3[largest]<arr3[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr3[largest],arr3[i]);
        heapify(arr3,n,largest);
    }
}
void MergeTwoBinaryMaxHeap(int *arr1,int *arr2,int n1,int n2)
{
    //Merge Two Array
    vector<int>arr3;
    for(int i=0;i<n1;i++)
    {
       arr3.push_back(arr1[i]); 
    }
    for(int i=0;i<n2;i++)
    {
       arr3.push_back(arr2[i]); 
    }
    //Heapify
    int n3=arr3.size();
    for(int i=n3/2-1;i>=0;i--)
    {
         heapify(arr3,n3,i);
    }
     for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }

}
int main()
{
    int arr1[100];
    int arr2[100];
    int n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    MergeTwoBinaryMaxHeap(arr1,arr2,n1,n2);
   
}