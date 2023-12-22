/*PRACTICE CODE Create a class "Bonus" having public data member "bonus_percent" of integer type with value 12.Create another class "Employee" with private data member "salary" of integer type. Create a constructor
to accept the salary. Employee class should be derived from Bonus class.Also create a member function "calculateSalary()" in Employee class that should display the final salary after applying the bonus percentage on the employee's salary.*/
#include<iostream>
using namespace std;
class Bonus
{
public:int bonus_percent=12;
};
class Employee:public Bonus
{
private:
        double salary;
public:
        Employee(double s)
        {
          salary=s;
        }
        void calculatesalary()
        {
           double extra=(salary*bonus_percent)/100;
           salary=salary+extra;
          cout<<"Salary with bonus:"<<salary;
        }
};
int main()
{
  double salary;
  cout<<"Enter salary";
  cin>>salary;
  Employee e1(salary);
  e1.calculatesalary();
}