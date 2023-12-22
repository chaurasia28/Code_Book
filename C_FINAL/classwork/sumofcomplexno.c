//sum of complex number:
#include<stdio.h>
struct complex{
  int imag;
  int real;
};
int main(){
    int sum1=0;
    int sum2=0;
    struct complex s1;
    struct complex s2;
    printf("Enter the complex number");
    scanf("%d%d",&s1.real,&s1.imag);
    printf("Enter the complex number");
    scanf("%d%d",&s2.real,&s2.imag);
    sum1=s1.real+s2.real;
    sum2=s1.imag+s2.imag;
    printf("Sum of two complex number-->");
    printf("%d+%di",sum1,sum2);
}
