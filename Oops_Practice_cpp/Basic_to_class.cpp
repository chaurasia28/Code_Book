/*Basic class to class typr*/
/*#include<iostream>
using namespace std;
class Myclass
{
public:int value;
       Myclass(int n)
      {
        value=n;
      }
      void display()
      {
        cout<<"Value="<<value<<endl;
      }
};
int main()
{//Basic
  int integer=28;
  //basic to class(by using constructor)
  Myclass obj=integer;
  obj.display();
}*/
#include<iostream>
using namespace std;
class Myclass
{
public:double value;
       Myclass(double val)
      {
      value=val;
      }
      operator double()
      {
        return value;
      }
};
int main()
{
  //class to basic
  Myclass obj=28.89;
  //double res=obj;
  double res=static_cast<int>(obj);
  cout<<"Value:"<<res<<endl;
}