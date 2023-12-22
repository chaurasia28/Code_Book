#include<stdio.h>
#include<math.h>
#define max 100
int stack[max];
int top=-1;
void push(int val)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    top++;
    stack[top]=val;
}
int is_operator(char symbol)
{
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
    {
        return 1;
    }
    return 0;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    int item=stack[top];
    top--;
    return item;

}
int postfix(char *expression)
{
    int i=0;
    int number,operand2,operand1,result;
    char symbol=expression[i];
    while(symbol!='\0')
    {
        if(symbol>='0' && symbol<='9')
        {
            number=symbol-'0';
            push(number);
        }
        if(is_operator(symbol))
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
    printf("Enter string\n");
    gets(expression);
    int result=postfix(expression);
    printf("Result:%d",result);
}
