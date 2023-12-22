//program to sum the marks of 5 subject and calculate the average by using array:
#include<stdio.h>
#define n 5
void main()
{   int arr[n],i;
    float sum=0,average;
    printf("Enter the  array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    average=sum/n;
    printf("Total marks=%0.2f\n",sum);
    printf("Average =%0.2f\n",average);
}
