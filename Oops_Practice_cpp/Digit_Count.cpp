#include<iostream>
using namespace std;
int main()
{
  int n,rem,count=0;
  cout<<"Enter number:"<<endl;
  cin>>n;
  while(n!=0)
    {
      rem=n%10;
      count=count+1;
      n=n/10;
    }
  cout<<"Digit count:"<<count<<endl;
}