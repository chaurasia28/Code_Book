#include<iostream>
using namespace std;
int main(){
  int i,j,n,k,l;
  cin>>n;
  i=1;
  l=1;
  while(i<=n){
    j=1;
    while(j<=n-i){
      cout<<" ";
      j=j+1;
    }
    k=1;
    while(k<=i){
      cout<< " "<<l;
      k=k+1;
      l=l+1;
    }
    cout<<endl;
    i=i+1;
  }
}