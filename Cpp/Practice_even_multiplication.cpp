#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number"<<endl;
  cin>>n;
  int multiply=1;
 for(int i=1;i<=n;i++)
   {
     if(i%2==0)
     {
       multiply=multiply*i;
     }
   }
  cout<<"Multiplication of all Even number "<<multiply<<endl;
}
