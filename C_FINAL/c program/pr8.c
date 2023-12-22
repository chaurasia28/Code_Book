#include<stdio.h>
void main()
{
    int i,j,n,arr[100],a;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   if (arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }

        printf("%d %d",arr[0],arr[n-1]);

}
