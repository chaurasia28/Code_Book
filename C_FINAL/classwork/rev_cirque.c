#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int val)
{
    if((rear+1)%max==front)
    {
        printf("Queue overflow..\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
    else
    {
        rear=((rear+1)%max);
        queue[rear]=val;
    }
}
void dequeue()
{
    if(front==rear)
    {
        printf("Stack underflow..\n");
    }
    else if(front==-1 && rear==-1)
    {
        printf("Stack underflow..\n");
    }
    else
    {
       printf("Delete element-->>%d\n",queue[front]);
       front=(front+1)%max;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue underflow...\n");
    }
    else{
        printf("Peek element-->>%d\n",queue[front]);
    }
}
void display()
{
    for(int i=0;i!=rear;i=(i+1)%max)
    {
        printf("%d",queue[i]);
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    peek();
    dequeue();
    dequeue();
    enqueue(28);
    enqueue(312);
    display();
    peek();

}
