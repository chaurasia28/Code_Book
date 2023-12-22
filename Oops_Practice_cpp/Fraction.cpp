#include<iostream>
using namespace std;
class Fraction
{
 public:
        int num,den;
        Fraction(int n,int d)
        {
          num=n;
          den=d;
        }
        void add(Fraction &f2)
        {
          num=((num*f2.den)+(f2.num*den));
          den=(den*f2.den);
        }
        void multiply(Fraction &f2)
        {
          num=(num*f2.num);
          den=(den*f2.den);
        }
        void display()
        {
          cout<<num<<"/"<<den<<endl;
        }
        int __hcf(int num1,int num2)
        {
          int min=num1<num2?num1:num2;
          int i=1;
          int hcf=1;
          while(i<=min)
            {
              if(num1%i==0 && num2%i==0)
              {
                hcf=i;
              }
              i++;
            }
          return hcf;
        }
        void simplify()
        {
          int g=__hcf(num,den);
          num=num/g;
          den=den/g;
        }
};
int main()
{
  int n1,d1,q;
  cout<<"Enter 1st fraction:";
  cin>>n1>>d1;
  Fraction f1(n1,d1);
  cout<<"Enter no of query:";
  cin>>q;
  int first[15];
  int second[15];
  int operation[15];
  for(int i=0;i<q;i++)
  {
    cin>>operation[i]>>first[i]>>second[i];
  }
  for(int i=0;i<q;i++)
    {
      Fraction f2(first[i],second[i]);
      if(operation[i]==1)
      {
        f1.add(f2);
        f1.simplify();
        f1.display();
      }
      else if(operation[i]==2)
      {
        f1.multiply(f2);
        f1.simplify();
        f1.display();
      }
    }
}