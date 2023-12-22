#include <iostream>
using namespace std;
void fibonacci(int n){
  int a=0;
  int b=1;
  int c,i;
  cout<<0<<endl;
  cout<<1<<endl;
  i=1;
  while(i<=n-2){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<endl;
    i++;
  }
}
int main(){
  int n;
  cout<<"Enter the n value";
  cin>>n;
  fibonacci(n);
}