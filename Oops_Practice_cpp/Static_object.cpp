/*Static Objects
Inside Constructor
End of the program
Inside destructor
*/
#include<iostream>
using namespace std;
class Myclass{
public:
       Myclass()
      {
        cout<<"Inside Constructor!"<<endl;
      }
      ~Myclass()
      {
        cout<<"Inside Destructor!"<<endl;
      }
};
int main()
{
  int x=0;
  if(x==0)
  {
    //static means value of an object will retain throughout the program until program end..once program end destructor is called*/
    static Myclass obj;
  }
  cout<<"End of the program!"<<endl;
}