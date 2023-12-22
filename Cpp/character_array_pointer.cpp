#include<iostream>
using namespace std;
int main()
{  
   //integer case---address is printed
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int *ptr=&arr[0];
   cout<<"Base address of an array"<<ptr<<endl;
   //character case---string is printed
   char ch[6]="abcde";
   char *c=&ch[0];
  cout<<"string--->>"<<c<<endl;
  //Prints the character till it don't get null character
  char a='z';
  char *b=&a;
  cout<<"String-->>"<<b<<endl;
}