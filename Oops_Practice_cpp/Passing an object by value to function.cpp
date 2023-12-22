/*Passing an object by value to function*/
#include<iostream>
using namespace std;
class Employees
{
public:
      string name,ecode;
      Employees(string nm ,string ec)
      {
        name=nm;
        ecode=ec;
        cout<<"Before update:"<<endl;
        cout<<"Name of Employee:"<<name<<endl;
        cout<<"Ecode of Employee:"<<ecode<<endl;
      }
};
void editinfo(Employees e1,string nm,string ec)
{
  cout<<"After update:"<<endl;
  e1.name=nm;
  e1.ecode=ec;
  cout<<"Name of Employee:"<<e1.name<<endl;
  cout<<"Ecode of Employee:"<<e1.ecode<<endl;
  
}
int main()
{
  string ecode,name;
  Employees e1("Ramesh","e001");
  cout<<"Enter name,ecode which you need to edit:"<<endl;
  cin>>name>>ecode;
  editinfo(e1,name,ecode);
}