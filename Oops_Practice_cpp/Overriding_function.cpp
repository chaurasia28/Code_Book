//PRACTICE CODE
/* Create two classes "Base" and "Derived". Create an overridden function with name "getValue()". When called by base class, it should return 10 and by derived class, it should return 5.5.*/
#include<iostream>
using namespace std;
class Base{
public:
        double getvalue()const
        {
          return 10;
        }
};
class Derived:public Base
{
public:
      double getvalue()
      {
        return 5.5;
      }
};
int main()
{
  Base b1;
  Derived d1;
  cout<<b1.getvalue()<<endl;
  cout<<d1.getvalue()<<endl;
}