#include<iostream>
using namespace std;
int ap(int n){
  return (3*n+7);
}
int main(){
  int n,result;
  cout<<"Enter the n value";
  cin>>n;
  result=ap(n);
  cout<<"nth term is "<<result;
}