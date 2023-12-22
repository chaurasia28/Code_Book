//Program to print the sum of individual row and column
#include<stdio.h>
void main()
{
    int a[100][100],i,j,n,m,sr,sc;
    printf("Enter the no of rows");
    scanf("%d",&m);
    printf("Enter the no of columns");
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
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {   sr=sc=0;
        for(j=0;j<n;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
     printf("row %d=%d",i,sr);
     printf("Column %d=%d",i,sc);
    }
}
