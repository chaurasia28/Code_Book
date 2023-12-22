//program to print the 2d array and find the sum:
#include<stdio.h>
void main()
{
    int a[100][100],i,j,n,m,sum=0;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of columns");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("Sum=%d",sum);
}
