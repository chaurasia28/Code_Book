/*Private Constructor-->using friend class
PRACTICE CODE
Create a private constructor "Number" which accepts an integer number.Now display the table of the number passed to this private constructor using private
member function "showTable()".*/
#include<iostream>
using namespace std;
class Number
{
private:
        double n;
        Number(int num)
        {
          n=num;
        }
        void showTable()
        {
          for(int i=0;i<=10;i++)
            {
              cout<<n<<"*"<<i<<"="<<n*i<<endl;
            }
        }
       friend class Table;
};
class Table{
public:
       Table()
      {
        int n;
        cout<<"Enter table number:";
        cin>>n;
        Number n1(n);
        n1.showTable();
      }
};
int main()
{
  Table t1;
}
