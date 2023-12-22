/*Private Constructor using Pointer*/
#include<iostream>
using namespace std;
class Employee
{
private:
        string name;
        int id;
        //Private Constructor
        Employee(string nm,int i)
        {
          name=nm;
          id=i;
        }
public:
//allocating memory dynamically uding pointer
        Employee* generateobject(string nm,int i)
        {
          //memory allocate dynamically
          return new Employee(nm,i);
        }
        void display()
        {
          cout<<"Name :"<<name<<endl;
          cout<<"Id :"<<id<<endl;
        }
};
int main()
{
  //Its pointer not object
  Employee *object1=NULL;
  Employee *object2=NULL;
  object1=object1->generateobject("Ramesh",1);
  object2=object2->generateobject("alok",2);
  object1->display();
  object2->display();
}