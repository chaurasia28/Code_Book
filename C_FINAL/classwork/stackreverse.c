#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
struct Stack{
char statement[MAX_SIZE][50];//assuming each word can have 50 character
int top;
};
void initialize(struct Stack *stack){
stack->top=-1;
}
int isfull(struct Stack *stack){
    return stack->top==MAX_SIZE-1;
}
void push(struct Stack *stack,const char *statement){
if(isfull(stack)){
    printf("No more element can be pushed..!!");
}
else{
stack->top++;
strcpy(stack->statement[stack->top],statement);
}
}
void display(struct Stack *stack){
int i;
for(i=stack->top;i>=0;i--){
    printf("%s ",stack->statement[i]);
}
}
int main(){
struct Stack stack;
initialize(&stack);
push(&stack,"Hello,");
push(&stack,"how");
push(&stack,"are");
push(&stack,"you");
display(&stack);
return 0;
}
