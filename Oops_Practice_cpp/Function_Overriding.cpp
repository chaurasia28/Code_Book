/*Function overriding*/
/*same name and same signature*/
#include<iostream>
using namespace std;
class Parent
{
  public:
        void myfunc()
        {
          cout<<"Base class Function!!\n";
        }
};
class Child:public Parent
{
  public:
         void myfunc()
        {
          cout<<"Child class Function!!\n";
          //Parent::myfunc();
        }
};
int main()
{
  Child child;
  //Calling parentfunction by pointer
  // Parent* ptr=NULL;
  // ptr->myfunc();
  // Child* ptr2=NULL;
  // ptr2->myfunc();
  //Calling parentfunction by scope resolution operator;
  child.Parent::myfunc();
  child.myfunc();
}