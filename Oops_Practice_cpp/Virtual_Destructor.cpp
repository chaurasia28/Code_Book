/*Remember firstly child class destructor is called then both memory is release by base class destructor*/
#include<iostream>
using namespace std;
class Base
{
public: Base()
        {
          cout<<"Base class Constructor!"<<endl;
        }
       virtual ~Base()
      {
        cout<<"Base class Destructor!"<<endl;
      }
};
class Child:public Base
{
public: Child()
        {
          cout<<"Child class Constructor!"<<endl;
        }
       ~Child()
      {
        cout<<"Child class Destructor!"<<endl;
      }
};
int main()
{// object refer to  base class
  Base *base1=new Child;
  delete base1;
}
