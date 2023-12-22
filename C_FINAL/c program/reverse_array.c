//Program to reverse the array by using pointer:
#include<stdio.h>
int reverse_array(int a[],int n);
void main()
{
    int i,a[50],n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse_array(a,n);
}
int reverse_array(int a[],int n)
{int i;
for(i=n-1;i>=0;i--)
{

printf("%d\t",a[i]);
}

}
