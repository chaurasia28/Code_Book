#include<stdio.h>
void main()
{
    int n,i,j,arr[100],freq[100],c;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {   c=1;
        for(j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {   c++;
                freq[j]=0;
            }
        }
        if (freq[i]!=0)
        {
            freq[i]=c;
        }
    }
        for(i=0;i<n;i++)
            {
                if(freq[i]!=0)
                {
                    printf("%d:%d\n",arr[i],freq[i]);
                }
            }

}
