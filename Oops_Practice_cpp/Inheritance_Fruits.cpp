#include<iostream>
using namespace std;
class Fruit{
public:
};
class Apple:public Fruit
{
public:int X;
       void set_apples(int x)
      {
        X=x;
      }
      int get_apples()
      {
        return X;
      }
};
class Mangoes:public Fruit
{
public:int X;
       void set_mangoes(int x)
      {
        X=x;
      }
      int get_mangoes()
      {
        return X;
      }
};
int main()
{
  int apple,mangoes;
  cin>>apple>>mangoes;
  Apple a1;
  a1.set_apples(apple);
  Mangoes m1;
  m1.set_mangoes(mangoes);
  cout<<"Apple in basket :"<<a1.get_apples()<<endl;
  cout<<"Mangoes in basket :"<<m1.get_mangoes()<<endl;
  cout<<"Total fruit in basket :"<<a1.get_apples()+m1.get_mangoes()<<endl;
}