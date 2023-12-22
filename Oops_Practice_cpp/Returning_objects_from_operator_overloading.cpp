/*Create a class 'Increment' with an integer private data member called "number".Define a operator function to increment the value of "number" by 2 when operator ++ as prefix is used,and increment the value of "number" by 3 when operator ++ is used as postfix to the object. You should ask the number from the user which you want to increment.*/
//Returning objects from operator functions*/
#include<iostream>
using namespace std;
class Increment
{
private:int number;
public:
      Increment(){}
      Increment(int n)
      {
        number=n;
      }
      //prefix
      Increment operator++()
      {
        Increment res1;
        res1.number=number+2;
        return res1;
      }
      //Postfix
       Increment operator++(int)
      {
        Increment res2;
        res2.number=number+3;
        return res2;
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
  Increment res1=++i1;
  res1.display();
  //postfix
  Increment res2=i1++;
  res2.display();
}