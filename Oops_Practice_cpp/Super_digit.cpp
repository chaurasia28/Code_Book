/*Super_Digit*/
#include<iostream>
using namespace std;
int super_digit(int n)
{
  if(n>=0 && n<=9)
  {
    return n;
  }
  n=n/10+n%10;
  return super_digit(n);
}
int main()
{
  int n;
  cout<<"Enter n";
  cin>>n;
 int ans= super_digit(n);
  cout<<ans<<endl;
}