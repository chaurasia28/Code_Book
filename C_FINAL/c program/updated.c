//Program to update the element in the array:
#include<stdio.h>
#define n 5
void main()
{
    int arr[n],i,pos,updatele;
    printf("Enter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before updation");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("Enter the position where you have to update the element \n");
    scanf("%d",&pos);
    printf("Enter the updated element");
    scanf("%d",&updatele);
    for(i=0;i<n;i++)
    {  if (i==pos)
       {
        arr[i-1]=updatele;
       }
    }
    printf("After element been updated");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
