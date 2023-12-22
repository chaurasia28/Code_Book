#include<iostream>
using namespace std;
int main(){
  int n,i,sum;
  int a=0;
  int b=1;
  cin>>n;
  cout<<a<<endl;
  cout<<b<<endl;
  for(i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;
    cout<<sum<<endl;
  }
}