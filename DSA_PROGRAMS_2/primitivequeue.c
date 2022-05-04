#include<stdio.h>
#include<stdlib.h>
#define TRUE
#define FALSE
struct queue
{
    int item[10];
    int rear;
    int front;


};
struct queue q;
void initializequeue()
{
    q.rear=-1;
    q.front=0;
}
int isempty()

{
  if(q.rear-q.front+1==0)
  {
      return TRUE;
  }
  else
  {
      return FALSE;
  }
}
void enqueue(int x)
{
    if(q.rear==10-1)
    {
        printf("overflow\n");
        exit(1);
    }
    else
    {
        q.rear=q.rear+1;
        q.item[q.rear]=x;
    }

}
int dequeue()
{
    int x;
    if(isempty())

    {
        printf("underflow\n");
    }
    else
    {
        x=q.item[q.front];
        q.front=q.front+1;
        return x;
    }
}
int main()
{
    int x;
    initializequeue();

    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    enqueue(500);
    enqueue(600);
    enqueue(700);
    x=dequeue(100);
    printf("\nthe deleted value is=> %d ", x);
}
