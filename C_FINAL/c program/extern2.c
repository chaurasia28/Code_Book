//program for extern storage class:default value:0; scope :global;lifetime:end of the program;location:ram
#include<stdio.h>
void display()
{
    extern int x;
    ++x;
    printf("HELLO FROM EXTERN2.C\n");
    printf("%d\n",x);
}
