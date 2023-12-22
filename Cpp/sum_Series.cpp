#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  int i,n;
  cout<<"Enter n value";
  cin>>n;
  float sum=0,r;
  for(i=1;i<=n;i++)
    {
      r=i;
      if(i%2!=0)
      {
        sum=sum+(1/r);
      }
      else
      {
        sum=sum-(1/r);
      }
    }
  cout<<"Series sum :"<<setprecision(6)<<sum<<endl;
}