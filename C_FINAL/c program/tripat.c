#include<stdio.h>
void main()
{
    int n,r,s,c;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the row");
    scanf("%d",&r);
    printf("enter the column");
    scanf("%d",&c);
    for(r=0;r<n;r++)
    {
        for(s=0;s<n-r-1;s++)
        {
            printf(" ");
        }
        for (c=0;c<2*r+1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
