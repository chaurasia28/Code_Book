#include<iostream>
using namespace std;
class Student
{
public:
      string name;
      int age;
      void show_info()
      {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
      }
};
int main()
{
  Student s1;
  s1.name="Shrishti";
  s1.age=19;
  s1.show_info();
  return 0;
}