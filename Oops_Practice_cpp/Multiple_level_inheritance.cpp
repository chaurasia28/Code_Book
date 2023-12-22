/*Multiple-level-inheritance*/
/*Every derived class is derived from another derived class*/
#include<iostream>
using namespace std;
class Grandfather
{
public:
       Grandfather()
      {
        cout<<"Granfather constructor is called!"<<endl;
      }
      void print1()
      {
        cout<<"Process of Granfather class\n";
      }
};
class father:public Grandfather
{
public:
       father()
      {
        cout<<"father constructor is called!"<<endl;
      }
      void print2()
      {
        cout<<"Process of father class\n";
      }
};
class son:public father
{
public:
       son()
      {
        cout<<"son constructor is called!"<<endl;
      }
      void print3()
      {
        cout<<"Process of son class\n";
      }
};
int main()
{
  son s1;
  s1.print3();
  s1.print1();
  s1.print2();
}