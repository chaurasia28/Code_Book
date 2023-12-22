/*Say digit*/
#include<iostream>
using namespace std;
void SayDigit(string arr[],int n)
{
  if(n==0)
  {
    return;
  }
  int rem=n%10;
  SayDigit(arr,n/10);
  cout<<arr[rem]<<" ";
}
int main()
{
  int n;
  cout<<"Enter the number:";
  cin>>n;
  string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  SayDigit(arr,n);
}