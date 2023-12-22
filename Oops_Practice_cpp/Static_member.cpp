/*Static Members*/
#include<iostream>
using namespace std;
class Employees{
public:
       static int total;
         Employees()
        {
          total=total+1;
        }
       ~Employees()
        {
          total=total-1;
        }
};
int Employees::total=0;
int main()
{
  // Employees e1;
  // cout<<"Number of employees:"<<e1.total<<endl;
  // Employees e2;
  // cout<<"Number of employees:"<<e2.total<<endl;
  // Employees e3;
  // cout<<"Number of employees:"<<e3.total<<endl;
  Employees e1,e2,e3;
  cout<<Employees::total<<endl;
}