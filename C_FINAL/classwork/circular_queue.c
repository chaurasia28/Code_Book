#include<stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int rear=-1;
int front=-1;
void enqueue(int val){
if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
else if((rear+1)%MAX_SIZE==front)
{
    printf("Queue is full...i.e overflow\n");
}
else{
    rear=(rear+1)%MAX_SIZE;
    queue[rear]=val;
}
}
void dequeue(){
if(rear==-1 && front==-1){
    printf("Queue is empty...i.e underflow\n");
}
else if(rear==front){
    printf("Queue is empty...i.e underfloe\n");
}
else{
  printf("%d is delete from queue...\n",queue[front]);
  front=(front+1)%MAX_SIZE;
}
}
void display(){
if(rear==-1 && front==-1)
    {
        printf("Queue is empty...\n");
    }
else{
    for(int i=0;i!=rear;i=(i+1)%MAX_SIZE){
       printf("%d element inside queue...\n",queue[i]);
    }
    //printf("%d element inside queue...\n",queue[rear]);
}
}
void peek(){
if(front==-1){
    printf("Empty queue...\n");
}
else{
    printf("%d is the front element..\n",queue[front]);
}}
int main(){
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
peek();
display();
dequeue();
dequeue();
enqueue(2);
enqueue(1);
display();
enqueue(28);
peek();
}
