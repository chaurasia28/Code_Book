/*Dynamic Constructor:PRACTICE CODE
Create a class "Myarray" that should create an
integer array "arr" holding values [1 2 3 4 5].
This array should be created by the constructor and memory should be allocated at runtime for this array.
Also display the array using constructor method.*/
#include<iostream>
using namespace std;
class Myarray
{
       int *arr;
public:
      Myarray()
      {
        //Allocating memory at run time
        int n;
        cout<<"Enter size of an array:";
        cin>>n;
        arr=new int[n];
        for(int i=0;i<n;i++)
          {
            cin>>arr[i];
          }
        for(int i=0;i<n;i++)
          {
            cout<<arr[i]<<" ";
          }
      }
};
int main()
{
 Myarray  m1; 
}