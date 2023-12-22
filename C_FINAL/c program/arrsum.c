//Program to add two array in third array:
#include<stdio.h>
#define n 5
void main()
{
    int i,arr1[n],arr2[n],sumarr[n];
    printf("Enter the elements of first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements for second array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("sum at %d index=%d\n",i,sumarr[i]);
    }

}
