#include<iostream>
using namespace std;
int main()
{
  int n,rev=0;
  cin>>n;
  int ans=n;
  while(n!=0)
    {
      int rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
  if(ans==rev)
  {
    cout<<ans<<" is a palindrome"<<endl;
  }
  else
  {
    cout<<ans<<" is not a palindrome"<<endl;
  }
}