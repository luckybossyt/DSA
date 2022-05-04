#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *adj[20];
int queue[20];
int rear,front;
void initialize()
{
    rear=-1;
    front=0;
}
void enqueue(int x)
{
    rear++;
    queue[rear]=x;
}
int dequeue()
{
    int x;
    x=queue[front];
    front++;
    return x;
}
int isempty()
{
    if(rear-front+1==0)
        return 1;
    else
        return 0;
}
struct node *GetNode(int x)
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=x;
    p->next=NULL;
    return p;
};
void bfs(int s,int N)
{
    int color[20]={0};
    int white=0,grey=1,black=2;
    int u,v;
    struct node*p;
    initialize();
    enqueue(s);
    color[s]=grey;
    while(!isempty())
    {
        u=dequeue();
        p=adj[u];
        while(p!=NULL)
        {
            v=p->info;
            p=p->next;
            if(color[v]==white)
            {
                color[v]=grey;
                enqueue(v);
            }
        }
        color[u]=black;
        printf("%d",u);
    }
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
adj[i]= p;
Last=adj[i];
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
p=adj[i];
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
adj[i]=NULL;
ReadGraph(N);
PrintGraph(N);
bfs(0,7);

return 0;
}


