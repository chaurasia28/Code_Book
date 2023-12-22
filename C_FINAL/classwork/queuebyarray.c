#include<stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1;
int rear=-1;
void enqueue(int val){
if(rear==MAX_SIZE-1){
        printf("Queue is full...overflow\n");
}
else if(rear==-1 && front==-1){
    rear=front=0;
    queue[rear]=val;
}
else{
    rear++;
    queue[rear]=val;
}
}
void peek(){
if(front==-1){
  printf("Queue is empty...\n");
}
else {
    printf("Front element in queue-->>%d\n",queue[front]);
}
}
void dequeue(){
if(front==-1){
    printf("Queue is empty...underflow\n");
}
else if(rear==front){
    printf("Queue is empty...underflow\n");
}
else{
    printf("Element delete from queue-->%d\n",queue[front]);
    front++;
}
}
void display(){
for(int i=0;i<=front;i++){
    printf("Element inside queue-->>%d\n",queue[i]);
}
}
int main(){
enqueue(2);
enqueue(3);
enqueue(4);
printf("Element in queue\n");
display();
peek();
printf("Element after delete\n");
dequeue();
peek();
display();
return 0;
}
