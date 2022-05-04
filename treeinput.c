#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node *Adj[20];

struct node *GetNode(int x)
{
struct node*p;
p=(struct node *)malloc(sizeof(struct node));
p->info=x;
p->next=NULL;
return p;
}

void ReadGraph(int N)
{
struct node *p,*Last;
int i,choice,x;
for(i=0;i<=N-1;i++)
{
Last=NULL;
do
{
printf("Does the adjacent of %d exist? (1/0)",i);
scanf("%d",&choice);
if(choice==1)
{
printf("Input the adjacent element node of %d");
scanf("%d",&x);
p=GetNode(x);

if(Last==NULL)
{
Adj[i]= p;
Last=Adj[i];
}
else
{
Last->next=p;
Last=p;
}
}
}while(choice==1);

}
}

void PrintGraph(int N)
{
int i;
struct node *p;
printf("Adjacency list is\n");
printf("	\n");
for(i=0;i<=N-1;i++)
{
printf("%d:-> ",i);
p=Adj[i];
while(p!=NULL)
{
printf("%d,",p->info);
p=p->next;
}
printf("\n\n");
}
}
int main()
{
int N,i;
printf("Input the no of nodes in the Graph");
scanf("%d",&N);
for(i=0;i<=N-1;i++)
Adj[i]=NULL;
ReadGraph(N);
PrintGraph(N);

return 0;
}
