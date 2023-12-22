#include<stdio.h>
#include<math.h>
#define max 100
int stack[max];
int top=-1;
void push(int num)
{
    if(top>=max-1)
    {
        printf("Stack overflow..\n");
        return;
    }
    top++;
    stack[top]=num;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow..\n");
        return -1;
    }
    int val=stack[top];
    top--;
    return val;
}
int isoperator(char symbol)
{
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
    {
        return 1;
    }
    return 0;
}
int postfix(char* expression)
{   int i=0;
    char symbol=expression[i];
    int num,operand2,operand1,result;
    while(symbol!='\0')
    {
        if(symbol>='0'&&symbol<='9')
        {
            num=symbol-'0';
            push(num);
        }
        else if(isoperator(symbol))
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
{
    char expression[max];
    int result;
    printf("Enter Postfix Expression...\n");
    scanf("%s",expression);
    //gets(expression);
    result=postfix(expression);
    printf("%d",result);
    return 0;
}
