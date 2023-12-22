/*Passing Function*/
#include<iostream>
using namespace std;
class Student
{
  public:
         double marks;
         Student(double m)
        {
          marks=m;
        }
};
void Average(Student s1,Student s2)
{
  double result=(s1.marks+s2.marks)/2;
  cout<<"Average Marks:"<<result<<endl;
}
int main()
{
  double m1,m2;
  cout<<"Enter marks of s1 ans s2:";
  cin>>m1>>m2;
  Student s1(m1);
  Student s2(m2);
  Average(s1,s2);
  return 0;
}