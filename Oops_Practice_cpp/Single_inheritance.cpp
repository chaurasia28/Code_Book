/*single inheritance*/
#include<iostream>
using namespace std;
class Vehicle
{
protected:
          string fuel="Petrol";
};
class car:public Vehicle
{
   public:
         int wheels=4;
         void display()
          {
            cout<<"fuel type:"<<fuel<<endl;
          }
};
class bike:public Vehicle
{
public:
        int wheels=2;
        void display()
        {
          cout<<"fuel type:"<<fuel<<endl;
        }
};
int main()
{
  car c;
  bike b;
  cout<<"Wheels in car:"<<c.wheels<<endl;
  c.display();
  cout<<"Wheels in bike:"<<b.wheels<<endl;
  b.display();
}