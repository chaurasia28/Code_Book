//program to insert the element in array:
#include<stdio.h>
void main()
{
    int arr[100],n,i,pos,insertele;
    printf("enter the size");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of array before insertion");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the position where you want to insert the element");
    scanf("%d",&pos);
    printf("Enter the inserted element");
    scanf("%d",&insertele);
    n++;
    for(i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=insertele;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}
