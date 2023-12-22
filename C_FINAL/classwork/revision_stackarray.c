#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int arr)
{
    if(top==max-1)
    {
        printf("Stack overflow..\n");
        return;
    }
    top++;
    stack[top]=arr;
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow...\n");
        return;
    }
    printf(" Pop element-->%d\n",stack[top]);
    top--;
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack underflow..\n");
        return;
    }
    printf("Topmost Element-->>%d\n",stack[top]);
}
int main()
{
    int arr[max];
    printf("Enter array element..\n");
    for(int i=0;i<max;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<max;i++){
        push(arr[i]);
    }
    display();
    printf("\n");
    peek();
    pop();
    printf("\n");
    display();
    peek();
}
