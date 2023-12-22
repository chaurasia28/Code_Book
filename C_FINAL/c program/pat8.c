#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the n value");
    scanf("%d",&n);
    printf("Enter the no.of rows");
    scanf("%d",&i);
    printf("Enter the no.of columns");
    scanf("%d",&j);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
