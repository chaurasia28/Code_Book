#include<stdio.h>
void main()
{
    int n,i,spaces,j,k;
    printf("Enter the n value");
    scanf("%d",&n);
    printf("Enter the no.of rows");
    scanf("%d",&i);
    printf("Enter the no.of columns");
    scanf("%d",&j);
    for(i=1;i<=n;i++)
    {
        for(spaces=1;spaces<=n-i;spaces++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=i-1;k++)
        {
            printf("*");
        }
        for(spaces=1;spaces<=n-i;spaces++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
