//program to swap two number by call by value:(remember in call by value changes made  in formal parameter is not reflect in actual parameter because copy of actual parameter is made and changes are not reflected in original one)
#include<stdio.h>
int swap(int,int);
void main()
{  int a,b;
   printf("Enter the first number");
   scanf("%d",&a);
   printf("Enter the second number");
   scanf("%d",&b);
   swap(a,b);//actual parameter
   printf("In main function\n");
   printf("a=%d,b=%d\n",a,b);

}
int swap(int a,int b)//formal parameter
{   int temp;
    temp=a;
    a=b;
    b=temp;
    printf("In user define function\n");
    printf("a=%d,b=%d\n",a,b);


}
