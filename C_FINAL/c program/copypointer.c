//Program to copy the element from one array to another:
#include<stdio.h>
int copy_arr(int *a, int *b,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
int first_array(int* a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int k[5]={3,6,7,8,9},n=5;
    int b[5];
    first_array(k,n);
    copy_arr(k,b,n);

}

