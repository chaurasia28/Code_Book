#include<iostream>
using namespace std;
void  print(int n)
{
  if (n==0)
     return;
  //cout<<n<<endl;//tail recursion
  print(n-1);
  cout<<n<<endl;//head recursion
}
int main()
{
  int n;
  cout<<"Enter n"<<endl;
  cin>>n;
  print(n);
  return 0;
}