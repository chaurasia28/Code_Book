//decimal to binary
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,bit,i=0,result=0;
  cin>>n;
  while(n!=0){
    bit=n&1;
    result=(bit*pow(10,i))+result;
    n=n>>1;
    i=i+1;
  }
  cout<<result;
}