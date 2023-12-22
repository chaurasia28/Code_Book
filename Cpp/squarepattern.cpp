#include<iostream>
using namespace std;
int main(){
  int i,j,n;
  cout<<"Enter the nth value";
  cin>>n;
  i=1;
  while(i<=n){
   j=1;
    while(j<=n)
    {
      cout<<"*";
      j=j+1;
    }
    i=i+1;
  cout<<endl;
  }
}
