/*overloading function must be preceded with ‘friend’ keyword.
Friend function declaration should be within class scope.*/
#include<iostream>
using namespace std;
class Distance
{
   public:
           double km,mt;
           Distance(){}
           Distance(double k,double m)
          {
            km=k;
            mt=m;
          }
          void display()
          {
            cout<<km<<"Km "<<mt<<"mt"<<endl;
          }
          friend Distance operator+(Distance &d1,Distance &d2);
};
Distance operator+(Distance &d1,Distance &d2)
{
  Distance d3;
  d3.km=d1.km+d2.km;
  d3.mt=d1.mt+d2.mt;
  while(d3.mt>=1000)
    {
      d3.km=d3.km+1;
      d3.mt=d3.mt-1000;
    }
  return d3;
}
int main()
{
 Distance d1(4,600);
 Distance d2(4,500);
 Distance d3=d1+d2;
  d3.display();
}