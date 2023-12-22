/*Template Overloading*/
#include<iostream>
using namespace std;
template <typename T>
void myfunc(T a,T b)
{
  cout<<a<<" "<<b<<endl;
}
void myfunc(int c,char d)
{
  cout<<c<<" "<<d<<endl;
}
int main()
{
  myfunc(1,2);
  myfunc<double>(5.5,6.5);
  myfunc(1,'c');//reverse the value then garbage value
}