//program to swap two number using function with call by value,call by reference;
#include<stdio.h>
int swap(int *,int *);
void main()
{
    int n1,n2;
    printf("enter the number n1");
    scanf("%d",&n1);
    printf("enter the number n2");
    scanf("%d",&n2);
    swap(&n1,&n2);
    printf("a=%d\n b=%d",n1,n2);

}
int swap(int *n1, int *n2)
{
  int temp=0;
  temp=*n1;
  *n1=*n2;
  *n2=temp;

}
