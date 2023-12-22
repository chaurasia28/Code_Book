//Program to multiply two matrices:
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,n1,m1,n2,m2,k,sum,c[100][100];
    printf("Enter the no of rows");
    scanf("%d",&m1);
    printf("Enter the no of columns");
    scanf("%d",&n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no of rows");
    scanf("%d",&m2);
    printf("Enter the no of columns");
    scanf("%d",&n2);
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if (n1==m2)
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++){
            sum=0;
            for(k=0;k<n1;k++)
            {
                sum=sum+a[i][k]*b[k][j];

            }
            c[i][j]=sum;
            }
        }
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("As n1!=m2 therefore no multiplication");
    }

}
