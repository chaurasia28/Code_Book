/*Sum of Number*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter n number"<<endl;
  cin>>n;
  int sum=0;
  while(n!=0)
    {
      int rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
  cout<<"Sum of number:"<<sum<<endl;
}