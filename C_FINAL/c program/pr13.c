#include<stdio.h>
void main()
{int arr[100],i,n,c1=0,c2=0,c3=0,c4=0,c5=0;
 printf("Enter the size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
     if (arr[i]>=0 && arr[i]<=39)
        c1++;
     else if(arr[i]>=40 && arr[i]<=49 )
        c2++;
     else if (arr[i]>=50 && arr[i]<=59)
        c3++;
     else if (arr[i]>=60 && arr[i]<=79)
        c4++;
     else if (arr[i]>=80 && arr[i]<=100)
        c5++;
 }
 i=1;
 printf("%d %d\n",i++,c1);
 printf("%d %d\n",i++,c2);
 printf("%d %d\n",i++,c3);
 printf("%d %d\n",i++,c4);
 printf("%d %d\n",i++,c5);

}
