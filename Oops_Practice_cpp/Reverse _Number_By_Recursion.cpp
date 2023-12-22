#include <iostream>
using namespace std;
void Reverse_Number(int n)
{
  //Tail Recursion
  //Base Condition
  if(n==0)
  {
    return;
  }
  //Processing
  int rem=n%10;
  cout<<rem;
  //Recurrence Relation
  return Reverse_Number(n/10);
}
int main()
{
  int n;
  cout<<"Enter n number";
  cin>>n;
  Reverse_Number(n);
}