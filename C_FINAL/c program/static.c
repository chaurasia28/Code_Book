//Program for static storage class:default value=0;scope:local;lifetime:end of the main program;location:RAM
#include<stdio.h>
static int a;
void display ();
void main()
{
    display();
    display();
    printf("inside main a=%d",a);//global access(lifetime)
}
void display()
{
    static a;
    a+=10;
    printf("a=%d\n",a);//retain its previous value
}
