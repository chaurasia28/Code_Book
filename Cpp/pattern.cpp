#include<iostream>
using namespace std;
int main(){
  int i,j,k,n,m,l,p;
  cin>>n;
  i=1;
  while(i<=n){
    j=1;
    while(j<=n-i){
      cout<<" ";
      j=j+1;
    }
    k=1;
    m=1;
    while(k<=i){
      cout<<m;
      k=k+1;
      m=m+1; 
    }
   l=1;
    p=i-1;
    while(l<=i-1){
      cout<<p;
      l=l+1;
      p=p-1;
    }
    j=1;
    while(j<=n-i){
      cout<<" ";
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }  
}