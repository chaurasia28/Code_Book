#include <iostream>
using namespace std;
void counting(int n)
{
  //Head Recursion:
  if(n<1)
  {
    return;
  }
  counting(n-1);
  cout<<n<<endl;
}
int main()
{
  int n;
  cout<<"Enter n number";
  cin>>n;
  counting(n);
}