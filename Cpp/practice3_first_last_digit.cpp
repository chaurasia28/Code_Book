#include<iostream>
using namespace std;
int main()
{
  int n,rem;
  cout<<"Enter n number"<<endl;
  cin>>n;
  int l=n;
  while(n!=0)
    {
      rem=n%10;
      n=n/10;
    }
  cout<<"First Digit:"<<rem<<endl;
  cout<<"Last digit:"<<l%10<<endl;
}