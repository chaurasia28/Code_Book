#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str1;
  string str2;
  bool flag=1;
  cin>>str1>>str2;
  if(str1.size()!=str2.size())
  {
    flag=0;
  }
  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end());
  for(int i=0;i<str1.size();i++)
    {
      for(int j=0;i<str2.size();j++)
        {
          if(str1[i]!=str2[j])
          {
            flag=0;
          }
          else
          {
            flag=1;
          }
        }
    }
  if(flag==1)
  {
    cout<<"anagram";
  }
  else
  {
    cout<<"not anagram";
  }
}