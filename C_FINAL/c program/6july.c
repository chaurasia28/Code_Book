#include<stdio.h>
struct employee{
int id;
char name;
float salary;
};//x,y,z--globally
//struct employee a;--globally
int main(){
  struct employee m={3,'b',90}; //(local to main function)
 // struct employee m;
 /* m.id=12;
  m.name='a';
  m.salary=100000.00;*/
  printf("Salary :%f",m.salary);
return 0;
}
