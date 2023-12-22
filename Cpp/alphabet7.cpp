#include<iostream>
using namespace std;
int main(){
  int i,j,n;
  cin>>n;
  i=1;
  while(i<=n){
    j=1;
    char ch='A'+i+j-2;
    while(j<=i){
      cout<<ch;
      j=j+1;
      ch=ch+1;
    }
    cout<<endl;
    i=i+1;
  }
}