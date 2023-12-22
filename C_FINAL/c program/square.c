//program to print the following pattern:
#include<stdio.h>
void main()
{
    int i,j,n;
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
          printf ("%d",i*j);
        }
        printf("\n");

    }
}
