/*First and Largest digit*/
#include<iostream>
using namespace std;
int main()
{
  int n,rem;
  cout<<"Enter n number:"<<endl;
  cin>>n;
  int last=n%10;
  while(n!=0)
    {
      rem=n%10;
      n=n/10;
    }
  cout<<"First digit is:"<<rem<<endl;
  cout<<"Last digit is:"<<last<<endl;
}