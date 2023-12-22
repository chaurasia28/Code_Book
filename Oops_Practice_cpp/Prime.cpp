#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  bool flag=1;
  for(int i=2;i<n-1;i++)
    {
      if(n%i==0)
      {
        flag=0;
        break;
      }
    }
  if(flag==1)
  {
    cout<<n<<" is a prime number"<<endl;
  }
  else
  {
    cout<<n<<" is not a prime number"<<endl;
  }
}