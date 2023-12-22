#include<stdio.h>
void main()
{
    int n,r,c;
    printf("enter the n");
    scanf("%d",&n);
    printf("Enter the row");
    scanf("%d",&r);
    printf("Enter the column");
    scanf("%d",&c);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
       printf("\n");
    }
}
