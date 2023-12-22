//Program to swap the two array by using pointer:
#include<stdio.h>
int array_swap(int [],int[],int[],int n);
void main()
{
    int a[50],b[50],temp[50],i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements of first array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the array elements of second array");

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    array_swap(a,b,temp,n);
}
int array_swap(int a[],int b[],int temp[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    temp[i]=a[i];
    a[i]=b[i];
    b[i]=temp[i];
    }
    printf("After swapping two array");
    printf("Elements of first array");
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    printf("Elements of second array");
    for(i=0;i<n;i++)
    {
    printf("%d",b[i]);
    }
}
