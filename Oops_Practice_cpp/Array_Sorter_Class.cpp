#include<iostream>
using namespace std;
class ArraySorter
{
public:int *arr,n;
       ArraySorter()
      {
        cout<<"Enter size of an array:";
        cin>>n;
        arr=new int[n];
      }
      void Input()
      {
        for(int i=0;i<n;i++)
          {
            cin>>arr[i];
          }
      }
      void swapped(int arr[],int a,int b)
      {
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
      }
      void sortarray()
      {
        for(int i=0;i<n-1;i++)
          {
            for(int j=0;j<n-i-1;j++)
              {
                if(arr[j]>arr[j+1])
                {
                  swapped(arr,j,j+1);
                }
              }
          }
      }
     void display()
      {
        for(int i=0;i<n;i++)
          {
                cout<<arr[i]<<" ";
          }
      }
      ~ArraySorter()
      {
        delete []arr;
      }
};
int main()
{
  ArraySorter a1;
  a1.Input();
  a1.sortarray();
  a1.display();
}