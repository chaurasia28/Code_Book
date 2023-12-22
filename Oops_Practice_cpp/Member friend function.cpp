/*Memeber function*/
#include<iostream>
using namespace std;
class Product;
class Category
{
public:
        void mbfrifunc(Product &p1);
};
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
       friend void Category::mbfrifunc(Product &p1);
};
void Category::mbfrifunc(Product &p1)
{
  cout<<"Name of Product is "<<p1.name<<endl;
  cout<<"Id of Product is "<<p1.id<<endl;
}
int  main()
{
  string name;
  int id;
  cout<<"Enter name and id";
  cin>>name;
  cin>>id;
  Product p1(name,id);
  Category c1;
  c1.mbfrifunc(p1);
}