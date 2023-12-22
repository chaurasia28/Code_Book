/*Armstrong Number*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter range";
  cin>>n;
  for(int i=1;i<=n;i++)
    {
      int nw=i;
      int nw2=i;
      int count=0;
      while(nw2!=0)
        {
          nw2=nw2/10;
          count=count+1;
        }
      int sum=0;
      while(nw!=0)
        {
          int rem=nw%10;
          sum=sum+pow(rem,count);
          nw=nw/10;
        }
      if(sum==i)
      {
        cout<<i<<" ";
      }
    }
}