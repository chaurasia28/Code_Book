#include<iostream>
using namespace std;
int main()
{
  int n,rev=0;
  cout<<"Enter number:"<<endl;
  cin>>n;
  while(n!=0)
    {
      int rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
  cout<<"Reverse number:"<<rev<<endl;
}