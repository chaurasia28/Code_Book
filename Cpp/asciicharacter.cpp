#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter the character"<<endl;
    cin>>ch;
  if(ch>='a'&& ch<='z')
  {
    cout<<"This is lowercase"<<endl;
  }
  else if(ch>='A'&& ch<='Z'){
    cout<<"This is uppercase"<<endl;
  }
  else if(ch>='0' && ch<='9')
  {
    cout<<"This is a numeric"<<endl;
  }
  else{
    cout<<"special character"<<endl;
  }
}