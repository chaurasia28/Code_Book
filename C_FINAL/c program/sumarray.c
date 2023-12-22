#include<stdio.h>
int sumele(int arr[],int n);
void main()
{
    int arr[50],n,result,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the element of arrays");
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    result=sumele(arr,n);
    printf("sum=%d",result);
}
int sumele(int arr[],int n)
{int i,sum=0;
printf("Sum of element");
for(i=0;i<n;i++)
{sum=sum+arr[i];}
return sum;
}
