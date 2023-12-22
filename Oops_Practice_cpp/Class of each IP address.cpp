/*Classification of IP Address*/
#include<iostream>
using namespace std;
int main()
{
   string ip;
  cout<<"Enter IP Address:"<<endl;
  cin>>ip;
  int i=0;
  int number=0;
  while(ip[i]!='.')
    {
      int rem=ip[i]-'0';
      number=number*10+rem;
      i++;
    }
  if(number>=0 && number<=127)
  {
    cout<<"Class A IP Address"<<endl;
  }
  else if(number>=128 && number<=191)
  {
    cout<<"Class B IP Address"<<endl;
  }
  else if(number>=192 && number<=224)
  {
    cout<<"Class C IP Address"<<endl;
  }
  else if(number>=225 && number<=239)
  {
    cout<<"Class D IP Address"<<endl;
  }
  else
  {
    cout<<"Class E IP Address"<<endl;
  }
}