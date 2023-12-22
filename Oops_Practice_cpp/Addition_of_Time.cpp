#include<iostream>
using namespace std;
class Time
{
 private:
         int hr,min,sec;
         int second,minute,hour;
 public:
       Time(){}
       Time(int hour,int minutes,int second)
      {
        hr=hour;
        min=minutes;
        sec=second;
      }
      Time operator+(Time &t2)
      {
       Time t3;
        t3.second=sec+t2.sec;
        t3.minute=min+t2.min+(t3.second/60);
        t3.hour=hr+t2.hr+(t3.minute/60);
        t3.second=(t3.second%60);
        t3.minute=(t3.minute%60);
        t3.hr=(t3.hr%24);
        return t3;
      }
      void display()
      {
        cout<<"Addition of two time:"<<hour<<":"<<minute<<":"<<second<<endl;
      }
};
int main()
{
  int h1,m1,s1,h2,m2,s2;
  //22,44,55
  cin>>h1>>m1>>s1;
  //12,50,45
  cin>>h2>>m2>>s2;
  Time t1(h1,m1,s1);
  Time t2(h2,m2,s2);
  Time t3;
  t3=t1+t2;
  t3.display();
}