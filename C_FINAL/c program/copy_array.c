//Program to copy one array to another array:
#include<stdio.h>
int copy_arr(int[],int [],int);
void main()
{
    int a[50],b[50],i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elemnets of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements before copying");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    copy_arr(a,b,n);
}
int copy_arr(int a1[], int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=a1[i];
    }
    printf("After copying the array from other array");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
