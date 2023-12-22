#include<stdio.h>
#define max 100
int stack[max];
int top=-1;
void push(int val)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    top++;
    stack[top]=val;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    int item=stack[top];
    top--;
    return item;
}
void peek()
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    int ele=stack[top];
    printf("Top most element is %d\n",ele);
}
void display()
{
    printf("Elements in stack\n");
    for(int i=0;i<top+1;i++)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
int main()
{
    push(6);
    push(7);
    push(8);
    push(9);
    display();
    peek();
    int item=pop();
    printf("Pop element is :%d\n",item);
    display();
}
