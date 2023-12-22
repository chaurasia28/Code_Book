/*Recursion with string*/
#include<iostream>
using namespace std;
void reverse(string&str,int s ,int e)
{
if(s>e)
{
  return;
}
  swap(str[s],str[e]);
  s++;
  e--;
  reverse(str,s,e);
}
int main()
{
  string str;
  cout<<"Enter string";
  cin>>str;
  int n=0;
  for(int i=0;str[i]!='\0';i++)
  {
    n=n+1;
  }
  reverse(str,0,n-1);
  cout<<str<<endl;
}