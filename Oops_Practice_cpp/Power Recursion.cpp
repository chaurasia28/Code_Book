#include <iostream>
using namespace std;
int Power_of_two(int n)
{
  if(n==0)
  {
    return 1;
  }
  return 2*Power_of_two(n-1);
}
int main()
{
  int n;
  cout<<"Enter n number:";
  cin>>n;
  int ans=Power_of_two(n);
  cout<<"2^"<<n<<" "<<ans<<endl;
}