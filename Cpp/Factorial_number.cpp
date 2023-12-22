#include<iostream>
using namespace std;
int factorial(int n)
{
  //Base Case
  if(n==1)
  {
    return 1;
  }
  //Recursion
  return n*factorial(n-1);
}
int main()
{
  int n,result;
  cout<<"Enter n number"<<endl;
  cin>>n;
  result=factorial(n);
  cout<<"Fcatorial :"<<result<<endl;
}