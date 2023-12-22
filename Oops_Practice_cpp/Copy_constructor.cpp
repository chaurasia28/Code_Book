/*User Defined copy Constructor--In this both source and copy have distinct memory location as object is dynamically allocated to an object*/
#include<iostream>
using namespace std;
class Employee
{
private:
       string name;
       double salary;
       int ecode;
public:
      //Simple Constructor
       Employee(string nm,double sal,int ed)
      {
        name=nm;
        salary=sal;
        ecode=ed;
      }
      //copy constructor --overloaded constructor
      Employee(Employee &e1)
      {
        name=e1.name;
        salary=e1.salary;
        ecode=e1.ecode;
      }
      void display()
      {
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Ecode:"<<ecode<<endl;
      }
};
int main()
{
  string name;
  double salary;
  int ecode;
  cout<<"Enter name:";
  cin>>name;
  cout<<"Enter salary:";
  cin>>salary;
  cout<<"Enter ecode:";
  cin>>ecode;
  Employee e1(name,salary,ecode);
  e1.display();
  // Employee e2=e1;
  //e2.display();
  Employee e2(e1);
  e2.display();

}