#include<iostream>
using namespace std;
int main(){
  int i,j,k,n;
  cin>>n;
  i=1;
  while(i<=n){
    j=1;
    while(j<=n-i+1){
      cout<<"*";
      j=j+1;
    }
    k=1;
    while(k<=i-1){
      cout<<" ";
      k=k+1;
    }
    cout<<endl;
    i=i+1;
  }
}