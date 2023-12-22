#include<iostream>
using namespace std;
class Complex
{
public:
        int real;
        int img;
        Complex(){};
        Complex(int r,int i)
        {
          real=r;
          img=i;
        }
        Complex operator++()//preincrement
        {
          return Complex(++real,++img);
        }
        Complex operator++(int)//postincrement
        {
          return Complex(++real,++img);
        }
        Complex  operator--()//predecrement
        {
          return Complex(--real,--img);
        }
       Complex operator--(int)//postdecrement
       {
         return Complex(--real,--img);
       }
       Complex operator-()
      {
        return Complex(-real,-img);
      }
      void display()
      {
        cout<<real<<"+i"<<img<<endl;
      }
};
int main()
{
  Complex c1(2,3);
  Complex res1=++c1;
  res1.display();
  Complex res2=--c1;
  res2.display();
  Complex res3=-c1;
  res3.display();
}