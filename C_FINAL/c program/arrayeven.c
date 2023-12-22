//program to count total no of odd and even number by using array:
#include<stdio.h>
#define n 5
void main()
{
    int arr[n],i,even=0,odd=0;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
           even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
     printf("Total number of even number=%d\n",even);
     printf("Total number of odd number =%d\n",odd);

}
