#include<iostream>
using namespace std;
class Student
{
public:string name;
       int age;
       Student(string nm,int ag)
      {
        name=nm;
        age=ag;
      }
  friend  ostream& operator<<(ostream &out,Student &s1);
};
ostream& operator<<(ostream &out,Student &s1)
{
  return out<<"Name:"<<s1.name<<endl<<"Age:"<<s1.age<<endl;
}
int main()
{
  Student s1("Rihaan",20);
  cout<<s1;
}