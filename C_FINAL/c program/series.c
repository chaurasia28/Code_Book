#include<stdio.h>
void main()
{
    int a,i,n,b;
    printf("enter the range");
    scanf("%d",&n);
    a=2;
    for(i=1;i<=n;i=i+2)
    {
        a+=i;
       // b=i*i;
        printf("%d\t",a);
       // printf("%d\t",b);
        /*if (i%2==0)
        {
            a=i*i;
            printf("%d\n",a);
        }
        else{
            a=i*i*i;
            printf("%d\n",a);
        }*/
    }

}
//6 1 7 2 8 3 9 4 10 5
//2 3 6 11 18
