#include<stdio.h>
#define max 100
char stack[max];
int top=-1;
void push(char s)
{
    if(top==max-1)
    {
      printf("Stack overflow\n");
      return;
    }
    top++;
    stack[top]=s;
}
char pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
        return 0;
    }
    char item=stack[top];
    top--;
    return item;
}
int main()
{
    char str[max];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
        {
            push(str[i]);
        }
        if(str[i]==')'||str[i]==']'||str[i]=='}')
        {
            if(top==-1)
            {
                printf("Unbalance Brackets\n");
                return 0;
            }
            char bracs=pop();
            if((str[i]==')'&& bracs!='(')||(str[i]==']'&& bracs!='[')||(str[i]=='}' && bracs!='{'))
            {
                printf("Unbalance Brackets\n");
                return 0;
            }
         }
    }
    if(top==-1)
    {
        printf("Balance Brackets\n");
    }
    else
    {
        printf("Unbalance Brackets\n");
    }
}
