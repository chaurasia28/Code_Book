#include <iostream>
#include<string.h>
using namespace std;
int count_segment(string &s)
{
  bool is_segment=false;
  int count=0;
  for(int i=0;s[i]!='\0';i++)
    {
      if(s[i]!=' ')
      {
        if(is_segment==false)
        {
        count=count+1;
        is_segment=true;
        } 
      }
      else if(s[i]==' ')
      {
        is_segment=false;
      }
    }
  return count;
}
int main()
{
   string str;
   getline(cin,str);
   int ans=count_segment(str);
   cout<<ans;
}