/*Private Constructor-->using friend class*/
#include<iostream>
using namespace std;
class Employee
{
private:string name,id;
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
     friend class HR;
};
class HR
{
public:
       HR()
      {
        Employee e1;
        Employee e2("Ankit");
        Employee e3("Rahul",1);
      }
};
int main()
{ 
  HR h1;
}