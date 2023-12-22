/*Friend class*/
#include <iostream>
using namespace std;
class Product
{
private:
  string name;
  int id;
public: Product(string pname,int pid)
        {
          name=pname;
          id=pid;
        }
      friend class Category;
};
class Category
{
private:
       string category="Electronics";
public:
       void display(Product &p1)
      {
        cout<<"Category:"<<category<<endl;
        cout<<"Pname:"<<p1.name<<endl;
        cout<<"Pid:"<<p1.id<<endl;
      }
};
int main()
{
  string a;
  int b;
  cout<<"Enter product name and product id";
  cin>>a;
  cin>>b;
  Product p1(a,b);
  Category c1;
  c1.display(p1);
}