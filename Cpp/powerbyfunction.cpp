#include<iostream>
using namespace std;
#include<math.h>
int power(int num1,int num2)
{
  return  pow(num1,num2);
}
int main(){
  int a,b,result;
  cout<<"Enter a value"<<endl;
  cin>>a;
  cout<<"Enter b value"<<endl;
  cin>>b;
  result=power(a,b);
  cout<<"Result = "<<result<<endl;
}

