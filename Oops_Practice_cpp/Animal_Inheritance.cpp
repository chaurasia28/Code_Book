#include <iostream>
using namespace std;
class Animal {
public:
  string name;
  Animal(string name) { this->name = name; }
};
class Dog : public Animal {
public:
  // Calling base class constructor
  Dog(string name) : Animal(name) { this->name = name; }
  void display() { cout << this->name << " barks:Barks" << endl; }
};
class Cat : public Animal {
public:
  // calling base class constructor
  Cat(string name) : Animal(name) { this->name = name; }
  void display() { cout << this->name << " meows:Meows" << endl; }
};
int main() {
  Dog d1("Buddy");
  d1.display();
  Cat c2("whiskers");
  c2.display();
}