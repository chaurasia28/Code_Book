#include<iostream>
using namespace std;
class Student
{
 public:
        string name;
        int age;
        Student(string name,int age)
        {
          this->name=name;
          this->age=age;
        }
        void showinfo()
        {
          cout<<"Name:"<<this->name<<endl;
          cout<<"Age:"<<this->age<<endl;
        }
};
int main()
{
  string name;
  int age;
  cout<<"Enter name and age"<<endl;
  cin>>name>>age;
  Student s1(name,age);
  s1.showinfo();
}