/*hybrid inheritance*/
#include<iostream>
using namespace std;
class Vehicle
{
 public:
       Vehicle()
      {
        cout<<"This is a Vehicle!!\n";
      }
};
class Fare
{
 public:
      Fare()
      {
        cout<<"Fair that is fees applied in this vehicle\n";
      }
};
//single inheritance
class Car:public Vehicle{};
//multiple inheritance
class Bike:public Vehicle,public Fare{};
int main()
{
 Car c1;
 Bike b1;
}