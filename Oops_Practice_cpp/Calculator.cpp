/*Calculator*/
#include<iostream>
using namespace std;
class Calculator
{
public:
       void add(int a,int b)
      {
        cout<<"Addition of two number:"<<a+b<<endl;
      }
      void subtract(int a,int b)
      {
        cout<<"Subtraction of two number:"<<a-b<<endl;
      }
      void Product(int a,int b)
      {
        cout<<"Product of two number:"<<a*b<<endl;
      }
     void division(int a,int b)
     {
       cout<<"Division of two number:"<<a/b<<endl;
     }
};
int main()
{
  Calculator c1;
  c1.add(2,3);
  c1.subtract(4,3);
  c1.Product(8,9);
  c1.division(9,3);
  return 0;
}