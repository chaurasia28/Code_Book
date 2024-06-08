#include<iostream>
using namespace std;
class Heap
{
    public:
           int arr2[100];
           int size;
           Heap()
           {
             arr2[0]=-1;
             size=0;
           }
           void insert(int value)
           {
              size=size+1;
              int index=size;
              arr2[index]=value;
              while(index>1)
              {
                int parent=index/2;
                if(arr2[parent]<arr2[index])
                {
                    swap(arr2[index],arr2[parent]);
                    index=parent;
                }
                else
                {
                    return;
                }
              }
           }
           void deletefromheap()
           {
             if(size==0)
             {
                cout<<"Nothing to delete"<<endl;
                return;
             }
             arr2[1]=arr2[size];
             size--;
             int i=1;
             while(i<size)
             {
                int left=2*i;
                int right=2*i+1;
                if(left<size && arr2[left]>arr2[i])
                {
                    swap(arr2[i],arr2[left]);
                    i=left;
                }
                else if(right<size && arr2[right]>arr2[i])
                {
                    swap(arr2[i],arr2[right]);
                    i=right;
                }
                else
                {
                    return;
                }
             }
           }
           void print()
           {
            for(int i=1;i<=size;i++)
            {
                cout<<arr2[i]<<" ";
            }
           }
};
int main()
{
    Heap h;
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        h.insert(arr[i]);
    }
    h.print();
    cout<<endl;
    h.deletefromheap();
    cout<<endl;
    h.print();
}