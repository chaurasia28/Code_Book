#include<iostream>
using namespace std;
int factorial(int n)
{
  if(n==1)
  {
    return 1;
  }
  if(n==2)
  {
    return 2;
  }
  return factorial(n-1)+factorial(n-2);
}
int main()
{
  int n;
  cin>>n;
  int ans=factorial(n);
  cout<<ans;
}