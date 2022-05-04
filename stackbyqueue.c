#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAXSIZE  100
struct Queue
{
    int Item[MAXSIZE];
    int Rear;
    int Front;
}Q1,Q2;
typedef struct Queue queue;

void InitializeQueue(queue *Q)
{
    Q->Rear=-1;
    Q->Front=0;
}

int IsEmpty(queue *Q)
{
    if(Q->Rear- Q->Front +1 ==0)
        return TRUE;
    else
        return FALSE;
}

void EnQueue(queue *Q2,int x)
{

    if(Q2->Rear== MAXSIZE -1)
    {
        printf("Queue Overflows");
        exit(1);
    }
    else
    {
        Q2->Rear++;
        Q2->Item[Q2->Rear]=x;
    }
}

int DeQueue(queue *Q2)
{
    int x;
    if(IsEmpty(Q2))
    {
        printf("Queue Underflows");
        exit(1);
    }
    else
    {
        x= Q2->Item[Q2->Front];
        Q2->Front++;
        return x;
    }
}
void push(queue*Q1,queue*Q2,int x)
{
    int temp,y;
EnQueue(Q2,x);
while(!IsEmpty(Q1))
    {
        y=DeQueue(Q2);
        EnQueue(Q2,y);

    }
 temp=*Q1;
 *Q1=*Q2;
 *Q2=temp;
}
int pop(queue *Q1,queue *Q2)
{
    int x;
    x=DeQueue(Q1);
    return x;
}


int main()
{
    int y;
    InitializeQueue(&Q1);
    InitializeQueue(&Q2);
    push(&Q1,&Q2,100);
    push(&Q1,&Q2,200);
    push(&Q1,&Q2,300);
    push(&Q1,&Q2,400);
    y=pop(&Q1,&Q2);
    printf("Dequeued Value is %d", y);
}
