#include<iostream>
using namespace std;
void print(int *ptr)
{
  cout<<"Value "<<*(ptr)<<endl;
}
void update(int *ptr)
{
  //ptr=ptr+1;
 // cout<<"Address of ptr inside update "<<ptr<<endl;
  *ptr=*ptr+1;
  
}
int getsum(int *arr,int n)
{ //here arr[]==*arr
  //cout<<sizeof(arr);-->8byte
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
  return sum;
}
int main()
{
 /* int value=5;
  int *ptr=&value;
  //print(ptr);
  //cout<<"Before"<<ptr<<endl;
  cout<<"Before"<<*ptr<<endl;
 // update(ptr);
  update(ptr);
  //cout<<"After"<<ptr<<endl;
  cout<<"Before"<<*ptr<<endl;*/


int arr[6]={1,2,3,4,5,8};////
cout<<"sum :"<<getsum(arr+3,3)<<endl;
}