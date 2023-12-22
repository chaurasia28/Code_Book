//Program to input and print array element:
#include<stdio.h>
#define n 5
void main()
{
    int arr[n],i;
    int *p=&arr[0];
    printf("Enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }

}
