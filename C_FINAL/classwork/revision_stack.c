#include<stdio.h>
#define max 100
char ch[max];
char stack[max];
int top=-1,count=0;
void push(char s)
{
    if(top==max-1)
    {
        printf("Stack overflow...\n");
    }
    top++;
    stack[top]=s;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow..\n");
    }
    ch[count++]=stack[top--];
}
int main()
{   int i=0;
    char str[max];
    printf("Enter string..\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    for(int i=0;str[i]!='\0';i++)
    {
        pop();
    }
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }
}
