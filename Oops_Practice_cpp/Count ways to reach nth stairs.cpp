/*Count Ways to reach n-th Stairs*/
#include<iostream>
using namespace std;
int Fibonacci(int n)
{
  if(n<0)
  {
    return 0;
  }
  if(n==0)
  {
    return 1;
  }
  return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
  int n;
  cout<<"Enter number of stairs:";
  cin>>n;
  int ans=Fibonacci(n);
  cout<<ans<<endl;
  
}