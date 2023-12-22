#include<stdio.h>
int swapped(int *a,int *b,int *c);
void main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    swapped(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}
int swapped(int *a,int *b,int *c)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;

}
