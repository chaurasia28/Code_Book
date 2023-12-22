#include<stdio.h>
#include<math.h>
#define max 100
int stack[max];
int top=-1;
void push(int val)
{
    if(top==max-1)
    {
        printf("Stack overflow..\n");
        return;
    }
    top++;
    stack[top]=val;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow..\n");
        return -1;
    }
    int item=stack[top];
    top--;
    return item;
}
int isoperator( char symbol)
{
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
    {
        return 1;
    }
    return 0;
}
int postfix(char* expression)
{
    int i=0;
    char symbol=expression[i];
    int num,operand2,operand1,result;
    while(symbol!='\0')
    {
        if(symbol>='0' && symbol<='9')
        {
            num=symbol-'0';
            push(num);
        }
        if(isoperator(symbol))
        {   operand2=pop();
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
{
    char expression[max];
    int result;
    printf("Enter expression..\n");
    gets(expression);
    result=postfix(expression);
    printf("Result %d",result);
}
