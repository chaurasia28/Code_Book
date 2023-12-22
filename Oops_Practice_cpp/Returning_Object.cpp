/*Returning Object*/
#include<iostream>
using namespace std;
class Student
{
  public:
         double marks,average;
         Student(){}
         Student(double m)
        {
          marks=m;
        }
};
Student Average(Student s1,Student s2)
{
  Student result;
  result.average=(s1.marks+s2.marks)/2;
  return result;
}
int main()
{
  double m1,m2;
  cout<<"Enter marks of s1 ans s2:";
  cin>>m1>>m2;
  Student s1(m1);
  Student s2(m2);
  Student res=Average(s1,s2);
  cout<<"Averge marks:"<<res.average<<endl;
  return 0;
}