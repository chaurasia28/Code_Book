/*OPERATOR OVERLOADING ::BINARY OPERATORS
In this code, we have changed the default behavior of binary + operator and perform the subtraction instead of addition.**/
#include<iostream>
using namespace std;
class Dominus
{
public:
       double a,result;
       Dominus(){}
       Dominus(double b)
      {
        a=b;
      }
       void operator+(Dominus &d1)
      {
        result=a-d1.a;  
      }
      void display()
      {
        cout<<"Subtraction of two number is "<<result<<endl;
      }
};
int main()
{
  double b1,b2;
  cin>>b1>>b2;
  Dominus d1(b1);
  Dominus d2(b2);
  d1+d2;
  d1.display();
}