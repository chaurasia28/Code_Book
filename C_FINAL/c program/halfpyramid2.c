//program to print the pattern
#include<stdio.h>
void main()
{
    int n,i,j,spaces;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the no of row");
    scanf("%d",&i);
    printf("enter the no of column");
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
        printf("\n");
    }
}
