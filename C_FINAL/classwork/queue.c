#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int val)
{
    if(rear==max-1)
    {
        printf("Queue overflow..\n");
    }
    else if(rear==-1 && front==-1)
    {
        rear=front=0;
        queue[rear]=val;
    }
    else
    {
        rear++;
        queue[rear]=val;
    }
    printf("%d inside queue..\n",queue[rear]);
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue underflow..\n");
    }
    else if(front==rear)
    {
        printf("Queue underflow..\n");
    }
    else
    {
        printf("Delete element-->>%d\n",queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("Queue underflow..\n");
    }
    else
    {
        printf("Peek Element-->>%d\n",queue[front]);
    }
}
/*void display()
{
    for(int i=0;i<=front;i++)
    {
        printf("%d\t",queue[i]);
    }
}*/
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
   enqueue(4);
    enqueue(5);
    peek();
    dequeue();
    peek();

}
