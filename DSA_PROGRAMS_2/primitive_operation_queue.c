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
}Q;

void InitializeQueue()
{
    Q.Rear=-1;
    Q.Front=0;
}

int IsEmpty()
{
    if(Q.Rear- Q.Front +1 ==0)
        return TRUE;
    else
        return FALSE;
}

void EnQueue(int x)
{
    if(Q.Rear== MAXSIZE -1)
    {
        printf("Queue Overflows");
        exit(1);
    }
    else
    {
        Q.Rear++;
        Q.Item[Q.Rear]=x;
    }
}

int DeQueue()
{
    int x;
    if(IsEmpty())
    {
        printf("Queue Underflows");
        exit(1);
    }
    else
    {
        x= Q.Item[Q.Front];
        Q.Front++;
        return x;
    }
}

int main()
{
    int y;
    InitializeQueue();
    EnQueue(100);
    EnQueue(200);
    EnQueue(300);
    EnQueue(400);
    y=DeQueue();
    printf("Dequeued Value is %d", y);
}
