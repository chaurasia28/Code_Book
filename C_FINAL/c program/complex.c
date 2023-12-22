#include<stdio.h>
#include<string.h>
struct complex{
  int real,imag;
  char operat[5];
}x;
int main(){
printf("Enter the real part,operator,imaginary part");
scanf("%d,%s,%d",&x.real,&x.operat,&x.imag);
printf("complex number is:%d%s%di",x.real,x.operat,x.imag);
return 0;
}
