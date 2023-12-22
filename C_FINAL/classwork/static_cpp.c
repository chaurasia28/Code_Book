#include<iostream>
using namespace std;
class Myclass{
public:
MyClass()
{
cout<<"Inside constructor\n";
}
~Myclass()
{
cout<<"Inside Destructor\n";
}
}
int main()
{
int x=0;
if(x==0)
{
static Myclass obj;
}
cout<<"End of main\n";
}
