#include<iostream>
using namespace std;
void Fibonacci(int s,int next,int l)
{
  //loop limit -l
  for(int i=1;i<=l;i++)
    {
      //print starting pt
      cout<<s<<" ";
      int temp=s;//int temp we have s value
      s=next;//in s we have next value
      next=temp+s; //next=temp+s
    }
}
int main()
{
  int s;//starting point
  int l;//limit
  cin>>s>>l;
  cout<<"Fibonacci series starting from "<<s<<" up to "<<l<<"numbers:";
  Fibonacci(s,s+1,l);
}