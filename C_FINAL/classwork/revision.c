#include<stdio.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top=-1;
void push(char ch)
{
    top++;
    stack[top]=ch;
}
char pop()
{
    char val=stack[top];
    top--;
    return val;
}
int main()
{   char str[MAX_SIZE];
    printf("Enter string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
            {
                push(str[i]);
            }
        else if(str[i]==')'||str[i]==']'||str[i]=='}')
        {
            if(top==-1){
                printf("Unbalance string...\n");
                return 0;
            }
            char braces=pop();
            if((str[i]==')' && braces!='(')||(str[i]==']' && braces!='[')||(str[i]=='}' && braces!='{')){
                printf("Unbalance bracket...\n");
                return 0;
            }
        }
    }
if(top==-1)
{
   printf("Balance bracket..\n");
}
else{
    printf("Unbalance bracket..\n");
}
return 0;
}
