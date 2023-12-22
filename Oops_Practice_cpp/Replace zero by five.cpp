/*Replace zero by five*/
#include<iostream>
using namespace std;
int main()
{
  int n,rev=0;
  cout<<"Enter n number:";
  cin>>n;
  while(n!=0)
    {
      int rem=n%10;
      if(rem==0)
      {
        rem=5;
      }
      rev=rev*10+rem;
      n=n/10;
    }
  int a=rev;
  int rev2=0;
  while(a!=0)
    {
     int rem=a%10;
      rev2=rev2*10+rem;
      a=a/10;
    }
  cout<<"Number after replacing zero by five:"<<rev2<<endl;
}