#include<iostream>
#include<string.h>
using namespace std;
int val(char c)
{
  if(c=='I'){return 1;}
  if(c=='V'){return 5;}
  if(c=='X'){return 10;}
  if(c=='L'){return 50;}
  if(c=='C'){return 100;}
  if(c=='D'){return 500;}
  if(c=='M'){return 1000;}
  return -1;
}
int roman(string &str)
{
  int res=0;
  for(int i=0;str[i]!='\0';i++)
    {
      int s1=val(str[i]);
      if((i+1)<=str.length())
      {
        int s2=val(str[i+1]);
        if(s1>=s2)
        {
          res=res+s1;
        }
        else
        {
          res=res+(s2-s1);
          i++;
        }
      }
      else
      {
        res=res+s1;
      }
    }
  return res;
}
int main()
{
  string str;
  getline(cin,str);
  int res=roman(str);
  cout<<"Roman number:"<<res<<endl;
}