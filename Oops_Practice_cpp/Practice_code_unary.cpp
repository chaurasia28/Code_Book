/*Create a class 'Increment' with an integer private data member called "number".Define a operator function to increment the value of "number" by 2 when operator ++ as prefix is used,and increment the value of "number" by 3 when operator ++ is used as postfix to the object. You should ask the number from the user which you want to increment.*/
#include<iostream>
using namespace std;
class Increment
{
private:int number;
public:
      Increment(int n)
      {
        number=n;
      }
      //prefix
      void operator++()
      {
        number=number+2;
      }
      //Postfix
       void operator++(int)
      {
        number=number+3;
      }
      void display()
      {
        cout<<"Number:"<<number<<endl;
      }
};
int main()
{
  int n;
  cout<<"Enter the number:";
  cin>>n;
  Increment i1(n);
  //prefix
  ++i1;
  i1.display();
  //postfix
  i1++;
  i1.display();
}