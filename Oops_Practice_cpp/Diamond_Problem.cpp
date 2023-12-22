// /*Diamond Problem*/
// #include<iostream>
// using namespace std;
// class Animals
// {
// public:
//      Animals()
//     {
//       cout<<"Animals constructor called!\n";
//     }
// };
// class Mammal:virtual public Animals
// {
// public:
//      Mammal()
//     {
//       cout<<"Mammal Constructor called!\n";
//     }
//     void move()
//     {
//       cout<<"Mammal can move\n";
//     }
// };
// class Birds:virtual public Animals
// {
// public:
//       Birds()
//       {
//         cout<<"Bird constructor called!\n";
//       }
//       void fly()
//       {
//         cout<<"Bird can fly!!\n";
//       }
// };
// class Bat:public Mammal,public Birds
// {
// public:
//       Bat()
//       {
//         cout<<"Bat constructor called!\n";
//       }
// };
// int main()
// {
//   Bat b1;
//   b1.fly();
//   b1.move();
// }

/*When we make base class as virtual class then last value will reflect no
 * amiguity is their*/
#include <iostream>
using namespace std;

class ClassA {
  int x;

public:
  void setX(int i) { x = i; }
  void print() { cout << x; }
};

class ClassB : virtual public ClassA {
public:
  ClassB() { setX(10); }
};

class ClassC : virtual public ClassA {
public:
  ClassC() { setX(20); }
};

class ClassD : public ClassB, public ClassC {};

int main() {
  ClassD d;
  d.print();
}