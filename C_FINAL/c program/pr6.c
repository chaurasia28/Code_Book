//Program for square number:
#include<stdio.h>
#include<math.h>
void main()
{
    int start,n,i,result;
    printf("Enter the start no");
    scanf("%d",&start);
    printf("Enter the end no");
    scanf("%d",&n);
    for(i=start;i<=n;i++)
    {
      result=sqrt(i);

    if(result*result==i)
    {
        printf("%d",i);
    }
    }

}
