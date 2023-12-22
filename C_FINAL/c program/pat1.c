//program for different pattern:
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the number of rows");
    scanf("%d",&i);
    printf("Enter the number of columns");
    scanf("%d",&j);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
