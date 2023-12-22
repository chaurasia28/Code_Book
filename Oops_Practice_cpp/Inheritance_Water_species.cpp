#include<iostream>
using namespace std;
class Mammals
{
public:
   void mammal()
  {
    cout<<"I am mammal\n";
  }
};
class MarineAnimals
{
public: 
      void MarineAnimal()
      {
        cout<<"I am Marine Animal\n";
      }
};
class BlueWhale:public Mammals,public MarineAnimals
{
  public:
         void display()
        {
          cout<<"I belongs to both categories i.e mammal and marine animals\n";
        }
};
int main()
{
  BlueWhale b;
  b.mammal();
  b.MarineAnimal();
  b.display();
  return 0;
}