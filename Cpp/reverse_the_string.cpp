#include<iostream>
#include<string.h>
using namespace std;
void reverse(string &s)
{
  //Calculate the size of an array:
  int n=0;
  for(int i=0;s[i]!='\0';i++)
  {
    n=n+1;
  }
  int i=0;
  string ans="";
  while(i<n)
    {
      string temp="";
      while(s[i]==' '&& i<n)
      {
        i++;
      }
      while(s[i]!=' ' && i<n)
      {
        temp=temp+s[i];
        i++;
      }
      if(temp.size()>0)
      {
        if(ans.size()==0)
        {
          ans=temp;
        }
        else
        {
          ans=temp+" "+ans;
        }
      }
    }
  cout<<"After reverse:"<<ans<<endl;
}
int main()
{
  string s;
  getline(cin,s);
  cout<<"Before reverse:"<<s<<endl;
  reverse(s);

}