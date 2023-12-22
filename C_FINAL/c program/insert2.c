//Program to insert the element in array:
#include<stdio.h>
void main()
{
    int arr[100],i,sizes,pos,insertele;
    printf("Enter the size of an array");
    scanf("%d",&sizes);
    printf("Enter the element of array");
    for(i=0;i<sizes;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element before insertion");
    for(i=0;i<sizes;i++)
    {
        printf("%d",arr[i]);
    }
    printf("Enter the position where you want to insert the element in array");
    scanf("%d",&pos);
    printf("Enter the inserted element");
    scanf("%d",&insertele);
    sizes++;
    for(i=sizes-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=insertele;
    printf("Elements after insertion");
    for(i=0;i<sizes;i++)
    {
        printf("%d",arr[i]);
    }
}
