#include<iostream>
#include<math.h>
using namespace std;
int cn(int n)
{
  int rem,count=0;
  while(n!=0)
    {
      rem=n%10;
      count=count+1;
      n=n/10;
    }
  return count;
}
int main()
{
  int n;
  cin>>n;
  int count=cn(n);
  int ans=n;
  int sum=0;
  while(n!=0)
    {
      int rem=n%10;
      sum=sum+pow(rem,count);
      n=n/10;
    }
  if(sum==ans)
  {
    cout<<ans<<" is an Armstrong Number.";
  }
  else
  {
    cout<<ans<<" is not an Armstrong Number.";
  }
}