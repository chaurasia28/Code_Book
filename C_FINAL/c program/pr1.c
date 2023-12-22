#include<stdio.h>
void main()
{
    int cu,pu,u,t,i,amt=0;
    for(i=0;i<=5;i++)
    {
        scanf("%d%d",&pu,&cu);
    u=cu-pu;
    if(u<=200)
    {
        amt=amt+0;
    }
    else if(u<=300)
    {
        t=u-200;
        amt=amt+t*3;
    }
    else if(u<=500)
    {
        t=u-300;
        amt=amt+300*3+t*5;
    }
    else
    {
        t=u-500;
        amt=amt+200*5+300*3+t*7;
    }
    }

printf("Total amount paid:%d",amt);
}
