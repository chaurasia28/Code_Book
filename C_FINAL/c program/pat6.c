#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the n value");
    scanf("%d",&n);
    printf("Enter the no.of rows");
    scanf("%d",&i);
    printf("Enter the no.of columns");
    scanf("%d",&j);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
