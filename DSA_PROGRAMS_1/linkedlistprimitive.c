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
void insbeg(int x){
    struct node *temp;
    temp=Getnode();
    temp->info=x;
    temp->next=START;
    START=temp;
}
void insend(int x)
{
    struct node *temp;
    struct node *t;
    temp=START;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    t=Getnode();
    t->info=x;
    t->next=NULL;
    temp->next=t;

}


void evenodd()
{
    struct node *t;
    int count1=0,count2=0;
    t=START;
    while (t!=NULL){
        if((t->info)%2==0)
        {
            count1+=1;
            t=t->next;
        }
        else{
            count2+=1;
            t=t->next;
        }

        }
        printf("%d \t%d \t",count1,count2);

}

int main(){
    START=NULL;
    int y;
    insbeg(9);
    insend(11);
    insend(200);
    insend(300);
    insend(407);
    insend(509);
    insend(600);
    evenodd();
    return 0;
}
