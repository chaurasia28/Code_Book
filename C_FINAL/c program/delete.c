//program to delete the element in array:
#include<stdio.h>
void main()
{  int i,arr[100],deletele,pos,n;
   printf("Enter the size of element");
   scanf("%d",&n);
   printf("Enter the array elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Elements before deletion");
   for(i=0;i<n;i++)
   {
       printf("%d",arr[i]);
   }
   printf("Enter the position where you want to delete the element");
   scanf("%d",&pos);
   for(i=pos-1;i<n-1;i++)
       if (pos<=0||pos>n)
       {
           printf("Not deleted");
       }
       else
           for(i=pos-1;i<n-1;i++)
           {

               arr[i]=arr[i+1];
               printf("%d",arr[i]);
       }
    n--;

   }



