#include<stdio.h>
#define max 100
char stack[max];
int top=-1;
char out[max];
int count=0;
void push(char s)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    top++;
    stack[top]=s;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    out[count++]=stack[top--];
}
int main()
{
    char str[max];
    printf("Enter string:\n");
    //scanf("%s",str);
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    for(int i=0;str[i]!='\0';i++)
    {
        pop();
    }
    for(int i=0;out[i]!='\0';i++)
    {
        printf("%c",out[i]);
    }

}
