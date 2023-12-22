#include<iostream>
using namespace std;
int main(){
  int i,n,flag=0;
  cin>>n;
  for(i=2;i<n;i++){
    if(n%2==0){
      flag=1;
      break;
    }
  }
  if(flag==1){
    cout<<"Not Prime number";
  }
 else{
   cout<<"Prime number";
 }
}