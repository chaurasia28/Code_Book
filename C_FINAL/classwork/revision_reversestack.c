#include<stdio.h>
#define max 10000
char stack[max];
char output[max];
int top=-1;
int count=0;
void push(char ch)
{
    if(top==max-1)
    {
        printf("stack overflow..\n");
        return;
    }
    top++;
    stack[top]=ch;
}
char pop()
{
    if(top==-1)
    {
        printf("stack underflow..\n");
        return -1;
    }
    output[count++]=stack[top--];
}
int main()
{
    char str[max];
    printf("Enter string...\n");
    //scanf("%s",str);
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    for(int i=0;str[i]!='\0';i++)
    {
        pop(str[i]);
    }
    for(int i=0;output[i]!='\0';i++)
    {
        printf("%c",output[i]);
    }
}
