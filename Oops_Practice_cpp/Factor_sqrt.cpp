/*Factor--sqrt*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sq=sqrt(n);
  if(sq*sq==n)
  {
    cout<<"Odd";
  }
  else
  {
    cout<<"Even";
  }
}