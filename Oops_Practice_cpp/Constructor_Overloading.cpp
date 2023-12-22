/*Constructor Overloading*/
#include<iostream>
using namespace std;
class Employee
{
public:string name,id;
      Employee()
      {
        cout<<"No Information available !!"<<endl;
      }
      Employee(string nm)
      {
        name=nm;
        cout<<"Name :"<<name<<endl;
      }
      Employee(string nm,int i)
      {
        name=nm;
        id=i;
        cout<<"Name :"<<name<<endl;
        cout<<"Id :"<<i<<endl;
      }
};
int main()
{ 
  Employee e1;
  Employee e2("Ankit");
  Employee e3("Rahul",1);
}