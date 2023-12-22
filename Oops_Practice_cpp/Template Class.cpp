#include<iostream>
using namespace std;
template <class T>
class Number
{
   public:
           T number;
          Number(T n)
          {
            number=n;
          }
           T get_number()
          {
            return number;
          }
};
int main()
{
  Number<int> n1(2);
  Number<double> n2(2.3);
  Number<char>n3('p');
  cout<<n1.get_number()<<endl;
  cout<<n2.get_number()<<endl;
  cout<<n3.get_number()<<endl;
}