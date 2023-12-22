#include<iostream>
using namespace std;
void reverse(int s,int e,string& str)
{
  if(s>e)
    return ;
  swap(str[s],str[e]);
  s++;
  e--;
  return reverse(s,e,str);

}
int main()
{
  string str;
  cout<<"Enter string"<<endl;
  cin>>str;
  reverse(0,str.length()-1,str);
  cout<<"Reverse string"<<endl;
  cout<<str<<endl;
}