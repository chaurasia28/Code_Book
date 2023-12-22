#include<iostream>
using namespace std;
int main(){
  int n,i,sum=0;
  cout<<"Enter the nth value"<<endl;
  cin>>n;
  for(i=0;i<=n;i++){
    sum=sum+i;
  }
  cout<<"Sum of natural number"<<"="<<sum<<endl;
}