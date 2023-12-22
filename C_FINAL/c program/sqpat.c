#include<stdio.h>
void main()
{
  int n,c,r;
  printf("enter the number ");
  scanf("%d",&n);
  printf("enter the no of rows");
  scanf("%d",&r);
  printf("enter the column");
  scanf("%d",&c);
  for(r=0;r<n;r++)
  {
    for (c=0;c<n;c++)
    {
        if((r==0)||(c==0)||(r==n-1)||(c==n-1))
            printf("#");
        else
            printf(" ");
    }
    printf("\n");
    }
}
