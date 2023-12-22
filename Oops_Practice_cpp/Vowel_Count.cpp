#include<iostream>
using namespace std;
int main()
{
  string str;
  string  vow="aeiouAEIOU";
  cin>>str;
  int count=0;
  //loop for keeping the str character count
  for(int i=0;str[i]!='\0';i++)
    {
       for(int j=0;vow[j]!='\0';j++)
         {
           if(str[i]==vow[j])
           {
             count=count+1;
           }
         }
    }
  cout<<"No. of vowels:"<<count<<endl;
}