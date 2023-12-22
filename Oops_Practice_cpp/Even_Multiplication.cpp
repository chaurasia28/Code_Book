#include<iostream>
using namespace std;
int main()
{
  int n,product=1;
  cout<<"Enter the number:";
  cin>>n;
  while(n!=0)
    {
      int rem=n%10;
      if(rem%2==0)
      {
        product=product*rem;
      }
      n=n/10;
    }
  cout<<"Even Multiplication:"<<product<<endl;
}