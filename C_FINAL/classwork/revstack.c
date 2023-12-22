//write program to remove middle word from stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100
struct Stack{
char words[MAX_SIZE][50];//each word size is 50
int top;//count index of word//index no array ka point
};
//insert element inside stack
void push(struct Stack *stack,const char *word)//struct type pointer accept,//char word size 50...when you don't no value to be inserted
{
    if(stack->top==MAX_SIZE-1){
        printf("Stack is full\n");
        return ;
    }
    stack->top++;
    strcpy(stack->words[stack->top],word);//copying from source to destination---right to left
}
char* pop(struct Stack *stack){
    if(stack->top==-1){
            printf("Stack is Empty\n");
            return ;
        }
        return stack->words[stack->top--];
}
void removemiddleword(struct Stack *stack){
int middle=(stack->top+1)/2;
struct Stack tempStack;
tempStack.top=-1;
//push words into tempStack until middle is reached
for(int i=0;i<middle;i++){
    push(&tempStack,pop(stack));
}
//remove middle element
pop(stack);
//push element into original stack
while(tempStack.top!=-1){
    push(stack,pop(&tempStack));
}
}
int main(){
struct Stack stack;
stack.top=-1;
push(&stack,"Hello");
push(&stack,"How");
push(&stack,"Are");
printf("\n Original Stack Values:");
for(int i=0;i<=stack.top;i++){
    printf("%s",stack.words[i]);
}
removemiddleword(&stack);
printf("\n After remove Middle word from Stack Values:");
for(int j=0;j<=stack.top;j++){
    printf("%s",stack.words[j]);
}
printf("\n");
return 0;
}


