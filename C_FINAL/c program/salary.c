#include<stdio.h>
#include<string.h>
void main()
{
    char g;
    int year,qual,sal;
    printf("enter the gender");
    scanf("%s",&g);
    printf("enter the year of services");
    scanf("%d",&year);
    printf("enter the qualifications--0==Graduate and 1==post graduate");
    scanf("%d",&qual);
    if(g=='m'&&qual==1&&year>=10)
    {
        printf("salary=15000");
    }
    else if ((g=='g'&&qual==0&&year>=10)||(g=='m'&&qual==1&&year<10))
    {
        printf("salary=10000");
    }
    else if (g=='m'&&qual==0&&year<10)
    {
        printf("salary=7000");
    }
    else if (g=='f'&&qual==1&&year>=10)
    {
        printf("salary=12000");
    }
    else if (g=='f'&&qual==0&&year>=10)
    {
        printf("salary=9000");
    }
    else if (g=='f'&&qual==1&&year<10)
    {
        printf("salary=10000");
    }
    else if(g=='f'&&qual==0&&year<10)
    {
        printf("salary=6000");
    }


}
