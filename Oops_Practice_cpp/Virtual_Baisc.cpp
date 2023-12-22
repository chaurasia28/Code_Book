/*Virtual Function:Virtual function is a member function that is overridden in
derived class. This is especially applies when pointer of base class points to
object of derived class*/
/*To make base class as virtual class we need to write virtual keyword before the function return type*/
#include <iostream>
using namespace std;
class Base {
public:
//if virtual keyword not written it will point to base class function
 virtual void func() { cout << "Base class Function!" << endl; }
};
class Derived : public Base {
public:
  void func() { cout << "Derived class Function" << endl; }
};
int main() {
  Derived derobj;
  Base *ptr = NULL;
  ptr = &derobj;
  ptr->func();
}