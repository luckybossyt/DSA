#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *START;
struct node* Getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg( struct node **START,int x){
    struct node *temp;
    temp=Getnode();
    temp->info=x;
    temp->next=(*START);
    (*START)=temp;
}
void insend(struct node **START,int x)
{
    struct node *temp;
    struct node *t;
    temp=(*START);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    t=Getnode();
    t->info=x;
    t->next=NULL;
    temp->next=t;

}
insaft(struct node **q,int x)
{
    struct node *temp;
    temp=Getnode();
    temp->info=x;
    temp->next=(*q)->next;

    (*q)->next=temp;
}
Traversal(struct node *START)
{
    struct node *t;
    t=(START);
    while (t!=NULL){
        printf("%d    ",t->info);
        t=t->next;
    }
}
freenode(struct node **r)
{

    free(r);
}
int DelAft(struct node **q){
 struct node *p;
 struct node *r;
 int x;
 p=(*q)->next;
 r=p->next;
 (*q)->next=r;

 x=p->info;
 freenode(p);
 return x;
 }
 deleteduplicate(struct node **START)
{
    struct node *p;
    struct node *q;
    p=(*START);
    q=(*START)->next;
    while(q!=NULL)
    {

    if((p->info )^ (q->info)==0)
    {
        q=q->next;
        DelAft(q);
    }

    else
    {


        p=p->next;
    q=q->next;

}
    }
}
int main()
{

    struct node *START=NULL;

    int y;
    insbeg(&START,100);
    insbeg(&START,200);
    insbeg(&START,507);
    insbeg(&START,507);
    insbeg(&START,807);
    insbeg(&START,900);
    insbeg(&START,900);
    Traversal(START);
    printf("\n\n\n");
deleteduplicate(&START);
Traversal(START);
return 0;
}
