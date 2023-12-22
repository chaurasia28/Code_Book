#include<iostream>
using namespace std;
void isprime(int n)
{ int i,flag=0;
  for(i=2;i<n;i++){
    if(n%i==0){
      flag=1;
      break;
    }
  }
 if(flag==1){
   cout<< "not prime";
 }
 else{
 cout<<"prime";
}
}
int main(){
  int n;
  cout<<"Enter the n number";
  cin>>n;
 isprime(n);
}