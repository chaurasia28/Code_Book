#include<iostream>
using namespace std;
int main(){
  int i,j,n,k;
  cin>>n;
  i=1;
  while(i<=n){
    j=1;
    while(j<=i-1){
      cout<<" ";
      j=j+1;
    }
    k=1;
    while(k<=n-i+1){
      cout<<i;
      k=k+1;
    }
    cout<<endl;
    i=i+1;
  }
}