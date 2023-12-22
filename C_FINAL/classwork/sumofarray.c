//Program using inline function to calculate sum of array
#include<stdio.h>
static inline void sum(int arr[],int n){
int sum=0;
printf("Enter the element of an array\n");
for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
printf("Sum of an array-->>%d",sum);
}
int main(){
char arr[100];
int n;
printf("Enter the size of an array\n");
scanf("%d",&n);
sum(arr,n);
}
