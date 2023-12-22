#include<iostream>
using namespace std;
int main(){
  int n,a,b;
  cout<<"Enter the n number";
    cin>>n;
  cout<<"Enter the a value";
  cin>>a;
  cout<<"Enter the b value";
  cin>>b;
  switch(n){
    case 1:
      cout<<"Addition"<<endl;
      cout<<a+b;
    break;
    case 2:
    cout<<"Subtraction"<<endl;
    cout<<a-b;
    break;
    case 3:
   cout<<"Multiplication"<<endl;
    cout<<a*b;
    break;
    case 4:
    cout<<"Division"<<endl;
    cout<<a/b;
    break;
    case 5:
    cout<<"Modulus"<<endl;    
    cout<<a%b;
    break;  default:cout<<"Something went Wrong";
  }
}
