 //program to calculate the sum of array elements by passing it to a function
#include<stdio.h>
#define n 5
int arrsum(int arr[n] );
void main()
{
    int arr[n],i,result;
    printf("Enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    result=arrsum(arr);
    printf("Sum of array elements =%d",result);
}
int arrsum(int arr[n])
{
   int sum=0,i;
   for(i=0;i<n;i++)
   {
       sum+=arr[i];
   }
   return sum;
}
