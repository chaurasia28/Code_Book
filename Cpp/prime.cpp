#include<iostream>
using namespace std;
int main(){
  int n,i,flag=1;
  cin>>n;
  i=2;
  while(i<n){
    if(n%i==0){
      flag=0;
      break;
    }
     i=i+1;
  }
  if(flag==1){
    cout<<"Prime"<<endl;
  }
  else
  {
    cout<<"Not Prime"<<endl;
  }
  
}