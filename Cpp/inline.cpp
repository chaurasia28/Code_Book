#include <iostream>
using namespace std;
int getmax(int& a,int& b)//pass ref variable same memory use
{ 
  int ans;
  ans=(a>b)?a:b;//ternary /conditional operator
  return ans; 
}
int main()
{
  int a,b,ans;
  cin>>a>>b;
  ans=getmax(a,b);
  cout<<"Maximum"<<ans<<endl;
  a=a+1;
  b=b+2;
  ans=getmax(a,b);
  cout<<"Maximum"<<ans<<endl;
}