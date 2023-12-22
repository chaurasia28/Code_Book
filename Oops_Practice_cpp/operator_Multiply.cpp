/* Create a class "Multiply" and overload the binary division operator to perform multiplication of
two numbers. Display the result through “showResult()” member function..**/
#include<iostream>
using namespace std;
class Multiply
{
public:
       double a,result;
       Multiply(){}
       Multiply(double b)
      {
        a=b;
      }
       void operator/(Multiply &d1)
      {
        result=a*d1.a;  
      }
      void display()
      {
        cout<<"Multiplication of two number is "<<result<<endl;
      }
};
int main()
{
  double b1,b2;
  cin>>b1>>b2;
  Multiply d1(b1);
  Multiply d2(b2);
  d1/d2;
  d1.display();
}