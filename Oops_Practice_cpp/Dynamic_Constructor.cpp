/*Dynamic Constructor*/
#include<iostream>
using namespace std;
class classA
{
public:int *val;
     //simple constructor
      classA()
      {
        //memory allocation to val refering to int-->bytes
        val=new int;
        //value at val should be 100
        *val=100;//100
      }
     //parameterised constructor
      classA(int a)
      {
        val=new int;
        *val=a+1;//10+1=11
      }
      void display()
      {
        //value at val 
        cout<<"value :"<<*val<<endl;
      }
      ~classA()
      {
        delete val;
      }
};
int main()
{
  classA a1;//calling simple constructor
  classA a2(10);//calling parameterised constructor
  a1.display();
  a2.display();
}