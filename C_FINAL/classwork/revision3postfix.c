#include<stdio.h>
#include<math.h>
#define max 100
int stack[max];
int top=-1;
void push(int num)
{
    if(top>=max-1)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top]=num;
}
int isoperator(char symbol)
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
        return-1;
    }
    int val=stack[top];
    top--;
    return val;
}
int postfix(char* expression)
{   int i=0;
    char symbol=expression[i];
    int num,operand1,operand2,result;
    while(symbol!='\0')
    {  if(symbol>='0' && symbol<='9')
       {
           num=symbol-'0';
           push(num);
       }
       else if(isoperator(symbol))
       {  operand2=pop();
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
    printf("Enter postfix string..\n");
    scanf("%s",expression);
    result=postfix(&expression);
    printf("%d",result);
 return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
// Stack implementation
int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top >= MAX_SIZE - 1) {
printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = item;
}

int pop() {
    if (top < 0) {
printf("Stack Underflow\n");
        return -1;
    }
    int item = stack[top];
    top--;
    return item;
}

int is_operator(char symbol) {
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
        return 1;
    }
    return 0;
}

int evaluate(char* expression) {
    int i = 0;
    char symbol = expression[i];
    int operand1, operand2, result;

    while (symbol != '\0') {
        if (symbol >= '0' && symbol <= '9') {
            int num = symbol - '0';
            push(num);
        }
        else if (is_operator(symbol)) {
            operand2 = pop();
            operand1 = pop();
            switch(symbol) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
            }
            push(result);
        }
i++;
        symbol = expression[i];
    }
    result = pop();
    return result;
}


int main() {
    char expression[] = "5 6 7 + * 8 -";
    int result = evaluate(expression);
printf("Result= %d\n", result);
return 0;
}*/

