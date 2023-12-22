/*no of set bits*/
#include<iostream>
using namespace std;
int setbit(int n)
{
  if(n==0)
  {
    return 0;
  }
  if((n & 1)==1)
  {
    //yes set bit 
    return 1+setbit(n>>1);
  }
  else
  {
    return setbit(n>>1);
  }
}
int main()
{
  int n;
  cin>>n;
  int ans=setbit(n);
  cout<<ans;
}