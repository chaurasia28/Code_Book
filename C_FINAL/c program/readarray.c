//program to read the array:
#include<stdio.h>
#define n 5
void main()
{
    int i,arr[n];
    printf("Enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("array elements at %d index=%d\n",i,arr[i]);
    }
    for(i=n;i>=0;i--)
    {
        printf("Array elements in reverse at %d index=%d\n ",i,arr[i]);
    }
}
