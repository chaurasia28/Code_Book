/*we have reversed the default behavior of binary == operator.*/
#include<iostream>
using namespace std;
class Compare
{
public:
      int a;
      Compare(int b)
      {
        a=b;
      }
      bool operator==(Compare &c2)
      {
        if(a==c2.a)
        {
          return false;
        }
        else
        {
          return true;
        }
      }
};
int main()
{
  int a,b;
  cout<<"Enter a and b value";
  cin>>a>>b;
  Compare c1(a);
  Compare c2(b);
  if(c1==c2)
  {
    cout<<"They are equal!";
  }
  else
  {
    cout<<"They are not equal!";
  }
}