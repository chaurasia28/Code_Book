/*Area of rectangle*/
#include<iostream>
using namespace std;
class Rectangle
{
private:
       double length;
       double breadth;
public:
       Rectangle(double l,double b)
      {
        length=l;
        breadth=b;
      }
      void cal_area()
      {
        cout<<"Area of Rectangle is "<<length*breadth<<endl;
      }
};
int main()
{
  Rectangle r1(2,4);
  r1.cal_area();
}