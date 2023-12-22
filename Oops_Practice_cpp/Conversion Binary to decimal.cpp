/*Conversion Binary to decimal*/
#include<iostream>
using namespace std;
int main()
{
  int n,power=1,base=0;
  cout<<"Enter Binary number:";
  cin>>n;
 for(int i=n-1;i>=0;i--)
   {
     int rem=n%10;
     if(rem==1)
     {
       base=base+power;
     }
     power=power*2;
     n=n/10;
   }
  cout<<"Decimal Number:"<<base<<endl;
}