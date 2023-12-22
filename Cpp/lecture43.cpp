#include<iostream>
using namespace std;
class Human{
public:
      int height;
      int weight;
      int age;
      int getage()
      {
        return this->age;
      }
     void setage(int age)
      {
        this->age=age;
      }
};
class Male:private Human{
public:
      string color;
      void sleep()
      {
        cout<<"Good night"<<endl;
      }
     void setheight(int height)
      {
        this->height=height;
      }
      int getheight()
      {
        return this->height;
      }
};
int main()
{
  
  //Private:
  /*Male m3;
 // cout<<m3.height<<endl;//Error should be there as private cann't access
  cout<<m3.getheight()<<endl;*/
  
  
  //Protected
 /*Male m2;
 m2.setheight(5);
 cout<<m2.getheight()<<endl;
 */


  
  //Public
 /* Male m1;
  m1.setage(21);
  cout<<m1.getage()<<endl;
  m1.color="Fair";
  cout<< m1.color<<endl;
  m1.sleep();*/
  return 0;
}