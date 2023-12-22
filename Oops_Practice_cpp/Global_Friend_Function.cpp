/*global Friend Function*/
#include<iostream>
using namespace std;
class Product
{
private:
        string name;
        int id;
public:
        Product(string pname,int pid)
        {
          name=pname;
          id=pid;
        }
       friend void gbfriendfunc(Product &p1);
};
void gbfriendfunc(Product &p1)
{
  cout<<"Name of Product is "<<p1.name<<endl;
  cout<<"Id of Product is "<<p1.id<<endl;
}
int main()
{
  string a;
  int b;
  cout<<"Enter Product Name:";
  cin>>a;
  cout<<"Enter Product id:";
  cin>>b;
  Product p1(a,b);
  gbfriendfunc(p1);
}