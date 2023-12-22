#include<iostream>
using namespace std;
bool check_palindrome(string str,int s,int e)
{
  if(s>e)
    return true;
  if(str[s]!=str[e])
    return false;
  else
  {
    return check_palindrome(str,s+1,e-1);
  }
}
int main()
{
  string str;
  cout<<"Enter string"<<endl;
  cin>>str;
  bool ispalindrome=check_palindrome(str,0,str.length()-1);
  if(ispalindrome)
  {
    cout<<"Palindrome"<<endl;
  }
  else
  {
    cout<<"Not Palindrome"<<endl;
  }
}