#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the n value");
    scanf("%d",&n);
    printf("Enter the no of row");
    scanf("%d",&i);
    printf("Enter the no of column");
    scanf("%d",&j);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
