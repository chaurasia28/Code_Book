#include<iostream>
using namespace std;
class Shape
{
public:
       virtual void cal_area()const=0;
};
class Rectangle:public Shape
{
public:
        double l,b;
        Rectangle(double length,double breadth)
        {
        l=length;
        b=breadth;
        }
       void cal_area()const override
      {
        cout<<"Area of Rectangle is "<<l*b<<endl;
      }
};
class Circle:public Shape
{
public:
       double r;
       Circle(double radius)
      {
        r=radius;
      }
      void cal_area()const override
      {
        cout<<"Area of circle is "<<3.141592*r*r<<endl;
      }
};
int main()
{
  double l,b,r;
  cin>>l>>b;
  cin>>r;
  Rectangle r1(l,b);
  r1.cal_area();
  Circle c1(r);
  c1.cal_area();
}