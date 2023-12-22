#include<stdio.h>
#define max 100
char stack[max];
int top=-1;
void push(char ch)
{
    if(top==max-1)
    {
        printf("Stack overflow...\n");
    }
    top++;
    stack[top]=ch;
}
char pop()
{
    if(top==-1)
    {
        printf("stack underflow..\n");
    }
    char item=stack[top];
    top--;
    return item;
}
int main()
{
    int i;
    char str[max];
    char brace;
    printf("Enter brackets..\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]=='['||str[i]=='('||str[i]=='{')
    {
        push(str[i]);
    }
    else if(str[i]==')'||str[i]==']'||str[i]=='}')
    {
        if(top==-1)
        {
            printf("unbalance bracket...\n");
            return 0;
        }
        brace=pop(str[i]);
        if((str[i]==')'&& brace!='(')||(str[i]==']'&& brace!='[')||(str[i]=='}'&& brace!='{'))
        {
            printf("Unbalance bracket..\n");
            return 0;
        }
    }
    }
    if(top==-1)
    {
        printf("Balance brackets..\n");
    }
    else{
        printf("Unbalance brackets...\n");
    }

}
