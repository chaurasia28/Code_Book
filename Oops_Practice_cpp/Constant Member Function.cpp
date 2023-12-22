/*Constant Member Function*/
#include<iostream>
using namespace std;
class Myclass
{
public:
      int A=100;
      void normalfunc()
      {
        cout<<"Cannot accessed by constant object!!"<<endl;
      }
     void myfunc()const
      {
        //A=A+1;//Error as its value is constant
        //Assignment operator donot work in constant member function
        cout<<"Value of A "<<A<<endl;
        cout<<"Value of A "<<A+50<<endl;
      }
};
int main()
{
 const Myclass obj;
 obj.myfunc();
  //obj.normalfunc();--Error as constant object can only accesssed constant member function
  //whereas normal object can accessed both normal function and const member function
}