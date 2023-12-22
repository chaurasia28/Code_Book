//Program to display the element in array:
#include<stdio.h>
#define n 5
void main()
{
    int arr[n],i;
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" Element at %d index = %d\n",i,arr[i]);
    }


}
