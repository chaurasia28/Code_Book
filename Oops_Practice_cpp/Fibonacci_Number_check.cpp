#include<iostream>
#include<math.h>
using namespace std;
bool check_sqrt(int x)
{
  int sq=sqrt(x);
  return sq*sq==x;
}
bool fibonacci(int n)
{
  return check_sqrt(5*n*n+4)||check_sqrt(5*n*n-4);
}
int main()
{
  int n;
  cout<<"Enter nth fibonacci number:";
  cin>>n;
  if(fibonacci(n))
  {
    cout<<"True";
  }
  else
  {
    cout<<"False";
  }
}