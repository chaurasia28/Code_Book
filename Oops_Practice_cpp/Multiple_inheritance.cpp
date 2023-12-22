/*Multiple Constructor*/
/*Constructor are call in same order in which they are 
inherited.
Destructor are call in reverse order*/
#include<iostream>
using namespace std;
class classx
{
public:
      classx()
      {
        cout<<"Constructor of x class"<<endl;
      }
      ~classx()
      {
        cout<<"destructor of x class"<<endl;
      }
};
class classy
{
public:
      classy()
      {
        cout<<"Constructor of y class"<<endl;
      }
      ~classy()
      {
        cout<<"Destructor of y class"<<endl;
      }
};
class classz:public classy,public classx
{
 public:
      classz()
      {
        cout<<"Constructor of z class"<<endl;
      }
      ~classz()
      {
        cout<<"Destructor of z class"<<endl;
      }
};
int main()
{
  classz classz;
}