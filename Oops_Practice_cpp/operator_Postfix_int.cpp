/*Operator Overloading Postfix*/
#include<iostream>
using namespace std;
class Count
{
public:double value;
      Count(double val)
      {
        value=val;
      }
      //postfix
      void operator++(int)
      {
        value=value+2;
      }
      void display()
      {
        cout<<"Value of "<<value<<endl;
      }
};
int main()
{
  int val;
  cout<<"Enter value:";
  cin>>val;
  Count c1(val);
  c1++;
  c1.display();
}