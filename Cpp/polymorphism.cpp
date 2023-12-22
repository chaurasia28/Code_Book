#include<iostream>
using namespace std;
class A{
public:
      int a,b;
      int add(int n1,int n2)
      {
        return n1+n2;
      }
      int add(double n1,double n2)
      {
        return n1+n2;
      }
void operator+(A& obj)
{
  int val1=this->a;//current object
  int val2=obj.a;//second i/p;
  cout<<"Output:"<<val2-val1<<endl;
}
};
class Animal{
public:
        void speak()
        {
          cout<<"Speaking"<<endl;
        }
};
class Dog:public Animal{
public:
        void speak()
        {
          cout<<"barking"<<endl;
        }
};
int main()
{

  Dog d;
  d.speak();
 /* A obj1,obj2;
  obj1.a=9;
  obj2.a=10;
  obj1+obj2;*/
 
  /*A a1;
 cout<< a1.add(2,4)<<endl;
 cout<< a1.add(9,8)<<endl;
  */
}
  