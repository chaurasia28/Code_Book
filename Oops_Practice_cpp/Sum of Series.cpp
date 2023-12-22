/*Sum of Series*/
#include<iostream>
using namespace std;
int main()
{
  //reemember r should be double to store double value
  int n;
  double sum=0,r;
  cin>>n;
  for(int i=1;i<=n;i++)
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
  printf("%0.4lf",sum);
 // cout<<sum;
}