#include<stdio.h>
#include<math.h>
#define max 100
int stack[max];
int top=-1;
void push(int val)
{
    if(top==max-1)
    {
        printf("stack overflow...!!\n");
        return ;
    }
    top++;
    stack[top]=val;
}
int is_operator( char symbol)
{
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
    {
        return 1;
    }
    return 0;
}
int pop()
{   int result;
    if(top==-1)
    {
        printf("stack underflow...\n");
        return -1;
    }
    result=stack[top];
    top--;
    return result;
}
int postfix(char* expression)
{   int i=0;
    char symbol=expression[i];
    int num,result,operand2,operand1;
    while(symbol!='\0')
    {
        if(symbol>='0' && symbol<='9')
        {
           num=symbol-'0';
           push(num);
        }
        else if(is_operator(symbol))
        {
            operand2=pop();
            operand1=pop();
            switch(symbol)
            {
                case '+':result=operand1+operand2;break;
                case '-':result=operand1-operand2;break;
                case '*':result=operand1*operand2;break;
                case '/':result=operand1/operand2;break;
                case '^':result=pow(operand1,operand2);break;
            }
            push(result);
        }
       i++;
       symbol=expression[i];
    }
result=pop();
return result;
}
int main()
{   char expression[max];
    int result;
    printf("Enter expression..\n");
    scanf("%s",expression);
    result=postfix(expression);
    printf("Result %d",result);
}
