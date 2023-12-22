/*Define a function template called "findMax()" to compare two parameters of integer, double and
char types*/
#include<iostream>
using namespace std;
template <typename T>
T findMax(T a,T b)
{
  return a>b?a:b;
}
int main()
{
  int a,b;
  double c,d;
  char e,f;
  cin>>a>>b;
  cin>>c>>d;
  cin>>e>>f;
  cout<<"Max:"<<findMax<int>(a,b)<<endl;
  cout<<"Max:"<<findMax<double>(c,d)<<endl;
  cout<<"Max:"<<findMax<char>(e,f)<<endl;
}