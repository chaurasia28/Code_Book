/*PRACTICE CODE Create a class with operator function to negate the entered value with the help of -operator as prefix.*/
#include<iostream>
using namespace std;
class Negation
{
public:
      int value,res;
       Negation(int val)
      {
        value=val;
      }
      void operator-()
      {
        res=-value;
      }
      void display()
      {
        cout<<"Value :"<<res<<endl;
      }
};
int main()
{
  int n;
  cout<<"Enter the value to be negated";
  cin>>n;
  Negation n1(n);
  -n1;
  n1.display();
}
