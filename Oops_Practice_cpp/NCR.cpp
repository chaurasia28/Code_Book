/*ncr*/
#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  return n*fact(n-1);
}
int NCR(int n,int r)
{
  return (fact(n))/(fact(n-r)*fact(r));
}
int main()
{
  int n;
  int r;
  cout<<"Enter n and r value:";
  cin>>n>>r;
  int ans=NCR(n,r);
  cout<<"NCR:"<<ans<<endl;
}