#include<iostream>
using namespace std;
class Animal{
public:
       int weight;
public:
       void bark()
      {
        cout<<"Barking"<<endl;
      }
};
class Human{
public:
      string color;
     void speak()
      {
        cout<<"Speaking"<<endl;
      }
   
};
class hybrid:public Animal,public Human{

};
class A{
public:
      void fun()
      {
        cout<<"I am A"<<endl;
}
};
class B{
public:
      void fun()
      {
        cout<<"I am B"<<endl;
}
};
class c :public A,public B{

};
/*class Dog:public Animal
{

};
class Germanshepherd:public Dog
{

};*/
int main()
{
  c obj;
  obj.A::fun();
  obj.B::fun();
  /*Germanshepherd g;
  g.speak();*/
  /*hybrid h;
  h.bark();
  h.speak();*/
}