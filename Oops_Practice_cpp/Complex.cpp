#include <iostream>
using namespace std;
class Complex
{
public:int real,img,den;
       Complex(){}
       Complex(int r,int i)
      {
        real=r;
        img=i;
      }
       Complex operator+(Complex &c2)
      {
        Complex res;
        res.real=real+c2.real;
        res.img=img+c2.img;
        return res;
      }
        Complex operator-(Complex &c2)
        {
          Complex res2;
          res2.real=real-c2.real;
          res2.img=img-c2.img;
          return res2;
        }
       Complex operator*(Complex &c2)
      {
        Complex res3;
        int temp=real;
        res3.real=((real*c2.real)-(img*c2.img));
        res3.img=((temp*c2.img)+(img*c2.real));
        return res3;
      }
      void operator/(Complex &c2)
      {
        int temp=real;
        den=((c2.real*c2.real)+(c2.img*c2.img));
        cout<<((real*c2.real)+(img*c2.img))<<"/"<<den
        <<"+"<<((img*c2.real)-(temp*c2.img))<<"/"<<den<<"i";
      }
       void display()
      {
        cout<<real<<"+i"<<img<<endl;
      }
};
int main()
{
  int ch;
  int r1,i1,r2,i2;
  cout<<"Enter real and imaginary parts:";
  cin>>r1>>i1;
  cin>>r2>>i2;
  Complex c1(r1,i1);
  Complex c2(r2,i2);
  cout<<"Enter choice:";
  cin>>ch;
  if(ch==1)
  {
    Complex res=c1+c2;
    res.display();
  }
  else if(ch==2)
    {
      Complex res2=c1-c2;
      res2.display();
    }
  else if(ch==3)
  {
    Complex res3=c1*c2;
    res3.display();
  }
  else if(ch==4)
  {
     c1/c2;
  }
  else
  {
    cout<<"Invalid Choice!!";
  }
  return 0;
}