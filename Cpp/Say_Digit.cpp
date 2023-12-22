#include<iostream>
using namespace std;
void saydigit(int n,string arr[])
{
  //Base condition
  if(n==0)
    return;
  //Processing
  int digit=n%10;
  n=n/10;
  //recursion relation
  saydigit(n,arr);  
  cout<<arr[digit]<<" ";
}
int main()
{
  string arr[10]={"zero","one","two","three","four","five","six","seven","eight",
  "nine"};
  int n;
  cout<<"Enter number"<<endl;
  cin>>n;
  saydigit(n,arr);
}