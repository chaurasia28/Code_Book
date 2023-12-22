#include<iostream>
using namespace std;
int getsum(int arr[],int size)
{
  int sum;
  //Base case we need to stop
  if(size==0)
    return 0;
  //Base case we need to stop
  if(size==1)
    return arr[0];
    //processing and recursion calling
  else{
    sum=arr[0]+getsum(arr+1,size-1);
  }
  return sum;
}
int main()
{
  int arr[10];
  int n;
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter Elements of an array"<<endl;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int result=getsum(arr,n);
  cout<<"Sum of array element "<<result<<endl;
}