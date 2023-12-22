#include<iostream>
using namespace std;
int main()
{
  try
  {
      int age;
      cin>>age;
      if(age>=18)
      {
        cout<<"Access Granted";
      }
      else 
      {
        throw 123;
      }
  }
    ///catch(...) except all type of exception
  catch(...)
    {
      cout<<"Access Denied!!";
    }
}