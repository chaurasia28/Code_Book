#include<iostream>
using namespace std;
int factorial(int n)
{
  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  return fact;
}
int ncr(int n,int r){
  int num=factorial(n);
  int den=factorial(r)*factorial(n-r);
  return num/den;
}
int main(){
  int n,r,ans;
  cout<<"Enter the n value";
  cin>>n;
  cout<<"Enter the r value";
  cin>>r;
  ans=ncr(n,r);
  cout<<"ncr ="<<ans<<endl;
}