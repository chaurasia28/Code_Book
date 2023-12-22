#include<iostream>
using namespace std;
int main(){
  int i,j,n,k;
  cin>>n;
  i=1;
  while(i<=n){
    j=1;
    k=i;
    while(j<=i){
      cout<<k<<" ";
      j=j+1;
      k=k+1;
    }
    cout<<endl;
    i=i+1;
  }
}