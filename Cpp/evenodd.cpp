#include<iostream>
using namespace std;
int check_even(int number){
  if(number%2==0){
    cout<<"Even"<<endl;
  }
  else{
    cout<<"odd"<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  check_even(n);
}