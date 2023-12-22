#include<stdio.h>
#define MAX_SIZE 5
//declare global variable
int stack[MAX_SIZE];
int top=-1;//it means whether stack is empty
void push(int val){
//check whether stack is full or not
if(top== MAX_SIZE-1){
    printf("Stack overflow i.e stack is full\n");
}
//if stack not full insert element in stack
else{
    top++;
    stack[top]=val;
    printf("[%d] element is push in Stack\n",stack[top]);
}
}
void pop(){
    if(top==-1){
        printf("Stack underflow i.e Stack is empty\n");
    }
    else{
        printf("Element that is removed-->>%d\n",stack[top]);
        top--;
    }
}
void peek(){
printf("Topmost Element in stack-->>%d\n",stack[top]);
}
void display(){
for(int i=0;i<=top;i++){
  printf("%d\n",stack[i]);
}
}
int main(){
push(1);
push(2);
push(3);
push(4);
push(5);
printf("Element inside stack before pop\n");
display();
pop();
printf("Element inside stack after pop\n");
display();
peek();
return 0;
}
