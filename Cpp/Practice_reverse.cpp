#include<iostream>
using namespace std;
int main()
{
  int n,rem,rev=0;
  cout<<"Enter number"<<endl;
  cin>>n;
  cout<<"Before Reverse:"<<n<<endl;
  while(n>0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
  cout<<"After Reverse:"<<rev<<endl;
}