#include<stdio.h>
void main()
{int n,r,c;
printf("enter the no n");
scanf("%d",&n);
printf("enter the no. of rows");
scanf("%d",&r);
printf("enter the no.of column");
scanf("%d",&c);
for (r=1;r<=n;r++)
{
    for(c=1;c<=r;c++)
    {
        printf("%d",c);
    }
    printf("\n");
}

}
