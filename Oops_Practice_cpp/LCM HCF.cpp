/*Replace zero by five*/
#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  cout<<"Enter n number:";
  cin>>n1>>n2;
  int min=n1<n2?n1:n2;
  int i=1;//no divisible by 0 is undefine
  int hcf=1;
  while(i<=min)
    {
      if(n1%i==0 && n2%i==0)
      {
        hcf=i;
      }
      i++;
    }
  int lcm=(n1*n2)/hcf;
  cout<<"HCF of two number:"<<hcf<<endl;
  cout<<"LCM of two number:"<<lcm<<endl;
}