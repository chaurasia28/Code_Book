#include<iostream>
using namespace std;
int main(){
  int i,j,star,k,n,p;
  cin>>n;
  i=1;
  while(i<=n){
    j=1;
    while(j<=n-i+1){
      cout<<j;
      j=j+1;
    }
    star=1;
    while(star<=2*i-2){
      cout<<"*";
      star=star+1;
    }
    k=1;
    p=n-i+1;
    while(k<=n-i+1){
      cout<<p;
      k=k+1;
      p=p-1;
    }
    cout<<endl;
    i=i+1;
  }
}