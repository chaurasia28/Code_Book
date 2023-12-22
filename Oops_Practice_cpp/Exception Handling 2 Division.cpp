#include<iostream>
using namespace std;
int Division(int x,int y)
{
  string str="Division by zero not define!!";
  if(y==0)
  {
    throw str;
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
   catch(string err)
    {
       cout<<err;
    }
}