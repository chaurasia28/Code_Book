/*Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string. You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly. */
#include<iostream>
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int i=0;
  int rev1=0;
  while(s1[i]!='\0')
    {
      int rem=s1[i]-'0';
      rev1=rev1*10+rem;
      i++;
    }
  int j=0;
  int rev2=0;
  while(s2[j]!='\0')
    {
       int rem=s2[j]-'0';
       rev2=rev2*10+rem;
      j++;
    }
  int sum=rev1+rev2;
  cout<<"Sum of two string:"<<sum<<endl;
}