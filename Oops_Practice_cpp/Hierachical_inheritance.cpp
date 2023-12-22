/*Hierachical inheritance*/
#include<iostream>
using namespace std;
class Input
{
public:int a,b;
      void Input_no()
      {
        cout<<"Enter value of a and b";
        cin>>a>>b;
      }
};
class add:public Input
{
public:
      void sum()
      {
        cout<<"Sum :"<<a+b<<endl;
      }
};
class subtract:public Input
{
public:
       void sub()
      {
        cout<<"Subtract :"<<a-b<<endl;
      }
};
class multiply:public Input
{
public:
      void mult()
      {
        cout<<"Multiply is "<<a*b<<endl;
      }
};
int main()
{
  add i1;
  i1.Input_no();
  i1.sum();
  subtract i2;
  i2.Input_no();
  i2.sub();
  multiply i3;
  i3.Input_no();
  i3.mult();
  return 0;
}