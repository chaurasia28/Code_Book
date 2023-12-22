//Program to reverse the array:
#include<stdio.h>
void main()
{int arr[4],i;
int n=4;
//printf("Enter the size of array");
//scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=n-1;i>=0;i--)
{
    printf("%d\t ",arr[i]);
}
}
