#include<iostream>
using namespace std;
class Shape
{
 public:
        virtual void getArea()const=0;
};
class Square:public Shape
{
 public:double side;
       Square(double s)
      {
        side=s;
      }
      void getArea()const override
      {
        cout<<"Area of square is "<<side*side<<endl;
      }
};
class Circle:public Shape
{
 public:double radius;
       Circle(double r)
      {
        radius=r;
      }
      void getArea()const override
      {
        cout<<"Area of Circle is "<<3.141592*radius*radius<<endl;
      }
};
int main()
{
  double s,r;
  cin>>s>>r;
  Square s1(s);
  s1.getArea();
  Circle c1(r);
  c1.getArea();
}