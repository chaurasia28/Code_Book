#include <iostream>
using namespace std;
int main() {
  int num = 5;     // num is variable whose datatype is int
  int *ptr = &num; // ptr is a special variable that is going to pointing to int
                   // datatype and storing the address of num variable;
  double num2 = 10.0; // num2 is variable whose datatype is double
  double *ptr2 =
      &num2; ////ptr2 is a special variable that is going to pointing to double
             ///datatype and storing the address of num2 variable;
  cout << "Address of num-->>" << &num << endl;
  cout << "Address of num-->>" << ptr << endl;
  cout << "Value store inside num variable-->>" << num << endl;
  cout << "Value store inside num variable-->>" << *ptr << endl;
  cout << "Address of num2-->>" << &num2 << endl;
  cout << "Address of num2-->>" << ptr2 << endl;
  cout << "Value store inside num variable-->>" << num2 << endl;
  cout << "Value store inside num variable-->>" << *ptr2 << endl;
  //in every datatype size of sizeof pointer will be 8byte..because it is storing address of variable 
  cout<<"Size of-->>"<<sizeof(ptr)<<endl;
  cout<<"Size of-->>"<<sizeof(ptr2)<<endl;
  //p pointer is created pointing to int data type variable and here address not assigned therfore points to garabage value--its bad practice
  //you need to assign 0 value that will give segmentation fault which means no such address is exist
  //int *p=0;
  //cout<<"Value-->>"<<*p<<endl;
  int i=5;
  int *pointer=&i;
  cout << "Address of i-->>" << pointer << endl;
  cout<<"Value of i-->>"<<*pointer<<endl;
  int *pointer2=0;
  pointer2=&i;
  cout << "Address of i-->>" << pointer2 << endl;
  cout<<"Value of i-->>"<<*pointer2<<endl;
  int no=10;
  int *pt=&no;
  cout<<"Before"<<*pt<<endl;
  (*pt)++;
  cout<<"After"<<*pt<<endl;
  //copying a pointer
  int *q=pt;
  cout<<pt<<"-"<<q<<endl;
  cout<<*pt<<"-"<<*q<<endl;
  int r=3;
  int *t=&r;
  cout<<*t<<endl;
  cout<<"Before t"<<t<<endl;
  t=t+1;//move 4 bytes in int case
  cout<<"After t"<<t<<endl;
  return 0;
}