#include<stdio.h>
void main()
{
    int arr[100],n,i,gen,sum=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the gender boys for 1 and girls for 0");
    scanf("%d",&gen);
    for(i=0;i<n;i++)
    {
        if(i%2==0 && gen==1)
            {
                sum=sum+arr[i];

            }
        else if(i%2!=0 && gen==0)
        {
            sum=sum+arr[i];
        }

    }
    printf("Total marks =%d",sum);

}
