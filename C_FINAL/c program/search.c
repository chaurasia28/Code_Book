//Program to search the element in array:
#include<stdio.h>
#define n 5
void main()
{
    int arr[n],i,searchele,flag=0;
    printf(" Enter the Element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("Enter the search element\n");
    scanf("%d",&searchele);
    for(i=0;i<n;i++)
    {   if (arr[i]==searchele)
        {
           flag=1;
           break;
        }
    }
   if (flag==1)
   { printf("Yes its found\n");
     printf("search element =%d\n",searchele);
   }
   else
   {
       printf("Not found");
   }

}
