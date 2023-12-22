#include<stdio.h>
#include<string.h>
#define max 100
char stack[max];
int top=-1;
void push(char s)
{
    if(top==max-1)
    {
        printf("stack overflow..\n");
        return;
    }
    top++;
    stack[top]=s;
}
char pop()
{
    if(top==-1)
    {
        printf("Stack underflow..\n");
    }
    char item=stack[top];
    top--;
    return item;
}
int main()
{
    char str[max];
    printf("Enter brackets...\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
        {
            push(str[i]);
        }
        else if(str[i]==')'||str[i]==']'||str[i]=='}')
        {
            if(top==-1)
            {
                printf("Unbalance brackets..\n");
                return 0;
            }
            char braces=pop();
            if((str[i]==')'&& braces!='(')||(str[i]==']'&& braces!='[')||(str[i]=='}'&& braces!='{'))
            {
                printf("Unbalance brackets...\n");
                return 0;
            }
        }
    }
    if(top==-1)
    {
        printf("Balance brackets..\n");
    }
    else
    {
        printf("Unbalance brackets..\n");
    }
    return 0;
}
