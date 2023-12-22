//Program to sort the array:
#include<stdio.h>
void main()
{
    int arr[100],n,i,j,a;
    printf("Enter the size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
