/*Create a class named “BankAccount” with a private data
member “balance”. Add public member functions to deposit and withdraw and display the balance.Also ensures that withdrawals cannot exceed the available balance.*/
#include<iostream>
using namespace std;
class BankAccount
{
private:
       double balance=2500;
public:
      void deposit(int dep)
      {
       balance=balance+dep;
      }
      void withdraw(double wd)
      {
        if(balance>=wd)
        {
          balance=balance-wd;
        }
        else
        {
          cout<<"Insufficient balance!"<<endl;
        }
      }
      void display()
      {
        cout<<"Total balance:"<<balance<<endl;
      }
};
int main()
{
  BankAccount b1;
  b1.deposit(2500);
  b1.display();
  b1.withdraw(500);
  b1.display();
}