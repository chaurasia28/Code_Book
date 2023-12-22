#include <iostream>
using namespace std;
int main()
{
  int n,sumeven=0,sumodd=0;
  cin>>n;
  int i=0;
  while(n>0)
    {
      int rem=n%10;
      if(i%2==0)
      {
        sumeven=sumeven+rem;
      }
      else
      {
        sumodd=sumodd+rem;
      }
      n=n/10;
      i++;
    }
  cout<<sumeven<<endl;
  cout<<sumodd<<endl;
  int difference=sumodd-sumeven;
  cout<<"Alternate Digit sum :"<<difference<<endl;
}