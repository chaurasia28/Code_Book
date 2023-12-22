#include<iostream>
using namespace std;
class chkNumber
{
 public:
         double n;
         chkNumber(double n)
        {
          if(n==0)
          {
            cout<<"0 is neutal"<<endl;
          }
          else if(n>0)
          {
            cout<<n<<" is a positive number"<<endl;
          }
          else
          {
            cout<<n<<" is a positive number"<<endl;
          }
        }
};
int main()
{
  int n;
  cin>>n;
  chkNumber cn(n);
}