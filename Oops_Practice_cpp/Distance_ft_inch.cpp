#include<iostream>
using namespace std;
class Distance
{
  public:int ft,ih;
        Distance(){}
         Distance(int feet,int inch)
        {
          ft=feet;
          ih=inch;
        }
        Distance add(Distance &d1,Distance &d2)
        {
          Distance sum;
          sum.ft=d1.ft+d2.ft;
          sum.ih=d1.ih+d2.ih;
          if(sum.ih>=12)
          {
            sum.ft=sum.ft+(sum.ih/12);
            sum.ih=(sum.ih % 12);
          }
          return sum;
        }
        void display()
        {
          cout<<ft<<"ft'-"<<ih<<"ih"<<endl;
        }
};
int main()
{
  int f1,i1,f2,i2;
  cin>>f1>>i1;
  cin>>f2>>i2;
  Distance d1(f1,i1);
  Distance d2(f2,i2);
  Distance sum=d1.add(d1,d2);
 sum.display();
}