#include <iostream>
using namespace std;
int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return n*factorial(n-1);
  }
}
int main()
{
  int n;
  cout<<"Enter n number:";
  cin>>n;
  int ans=factorial(n);
  cout<<"Factorial of "<<n<<" "<<ans<<endl;
}