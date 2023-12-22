//Program to add  two matrices:
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,n,m,sum=0;
    printf("Enter the no of rows");
    scanf("%d",&m);
    printf("Enter the no of columns");
    scanf("%d",&n);
    printf("Enter the elements of first array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of two matrices");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
}
