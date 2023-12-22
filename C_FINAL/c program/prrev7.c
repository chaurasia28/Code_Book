#include<stdio.h>
void main()
{
    int arr[100],i,j,n,a,count,store;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the elements of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }

        }
    }
    store=arr[0];
    for(i=0;i<n;i++){
    if(arr[i]==store)
    {
        count++;
    }
    }
    printf("%d %d",arr[0],count);
}
