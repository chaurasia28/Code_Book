#include<iostream>
using namespace std;
class Date
{
public:
       int d,m,y;
       Date(int day,int month,int year)
      {
        d=day;
        m=month;
        y=year;
      }
     bool check_date()
{
  if(d<0 ||d>31)
  {
    return false;
  }
  if(m<0 ||m>12)
  {
    return false;
  }
  if((m==1||m==3||m==5||m==7||m==8||m==10||m==12) && d>31)
  {
    return false;
  }
  if((m==4||m==6||m==9||m==11)&&d>30)
  {
    return false;
  }
  if(m==2)
  {
    if((y%4==0 && y%100!=0)||y%400==0)
    {
      if(d>29)
      {
        return false;
      }
    }
    else{
      if(d>28)
      {
        return false;
      }
    }
  }
  return true;
}
};
int main()
{
  int d,m,y;
  cin>>d>>m>>y;
  Date d1(d,m,y);
  if(d1.check_date())
  {
    cout<<d<<"/"<<m<<"/"<<y;
  }
  else
  {
    cout<<"Invalid date!";
  }
}