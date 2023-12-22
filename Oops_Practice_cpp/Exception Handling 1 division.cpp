#include<iostream>
using namespace std;
int Division(int x,int y)
{
  if(y==0)
  {
    throw "Division by zero not define!!";
  }
  return x/y;
}
int main()
{
  try
    {
       int x,y;
      cin>>x>>y;
      int res=Division(x,y);
      cout<<"Division:"<<res<<endl;
    }
   catch(const char *err)
    {
       cout<<err;
    }
}