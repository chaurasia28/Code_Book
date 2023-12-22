//Printing complex number:
#include<stdio.h>
struct complex{
int real;
int imag;
}s1;
int main(){
   printf("Enter the real and imaginary part");
   scanf("%d %d",&s1.real,&s1.imag);
   printf("Complex Number -->>");
   printf("%d+i%d",s1.real,s1.imag);
   return 0;
}
