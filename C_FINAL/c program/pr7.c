#include<stdio.h>
void main()
{
    int i,n,arr[100],big=0,count=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]>big)
       {
           big=arr[i];
       }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==big)
        {
            count=count+1;
        }
    }
    printf("%d %d",big,count);
}
