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
        throw (age);
      }
  }
  catch(int age)
    {
      cout<<"Access Denied!!"<<"Age is :"<<age<<endl;
    }
}