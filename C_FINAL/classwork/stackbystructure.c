#include<stdio.h>
#define MAX_SIZE 5
struct Stack {
int value[MAX_SIZE];
int top;
};
//initialize top value
void initialize(struct Stack *stack){
stack->top=-1;
}
//Check whether stack is full or not
int isfull(struct Stack *stack){
        return stack->top==MAX_SIZE-1;
}
//check whether stack is empty or not
int isempty(struct Stack *stack){
   return stack->top==-1;

}
//Inserting the Element
void push(struct Stack *stack,int value){
    if(isfull(&stack)){
        printf("Stack is overflow..i.e stack is full\n");
    }
    else{
      stack->top++;
      stack->value[stack->top]=value;
    }
}
//topmost element in stack
void peek(struct Stack *stack){
    if(isempty(&stack)){
        printf("stack is empty ...so no topmost element\n");
    }
    else{
        printf("Topmost Element in stack-->%d\n",stack->value[stack->top]);
    }
}
//Element remove from stack
void pop(struct Stack *stack){
if(isempty(&stack)){
  printf("Stack Underflow...i.e...stack is empty\n");
}
else{
    printf("Element remove from stack-->>%d\n",stack->value[stack->top]);
    stack->top--;
}
}
void display(struct Stack *stack){
    if(isempty(&stack)){
        printf("stack is empty..\n");
    }
    for(int i=0;i<=stack->top;i++)
    {
        printf("[%d] Element inside stack...\n",stack->value[i]);
    }
}
int main(){
struct Stack stack;
initialize(&stack);
push(&stack,10);
push(&stack,20);
push(&stack,30);
push(&stack,40);
push(&stack,50);
printf("Elements inside stack before popped...\n");
display(&stack);
peek(&stack);
pop(&stack);
printf("Elements inside stack after popped...\n");
display(&stack);
return 0;
}
