#include<iostream>
using namespace std;
class  Heap
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
                         swap(arr2[parent],arr2[index]);
                         index=parent;
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
    return 0;
}