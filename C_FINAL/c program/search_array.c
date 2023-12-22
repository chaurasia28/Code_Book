//Program to search the element from the user:
#include<stdio.h>
int search_ele(int a[],int n,int ele);
void main()
{
    int i,a[10],ele,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element");
    scanf("%d",&ele);
    search_ele(a,n,ele);
}
int search_ele(int a[],int n,int ele)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if (a[i]==ele)
        {flag=1;
         break;
        }
    }
    if (flag==1)
    {
        printf("yes,searched");
    }
    else
    {
        printf("Try again");
    }
}
