#include<stdio.h>
#define TRUE
#define FALSE
struct queue
{
    int a;
    int item[10];
    int front ;
    int rear;
};
typedef struct queue Queue;
 void initializequeue(queue *q1,Queue *q2)
 {
     q->rear=-1;
     q->front=0;
 }
 isempty(Queue q)
 {
     if(q->rear-q.front+1=0)
        return TRUE;
     else
        return FALSE

 }
