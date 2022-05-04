#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node*adj[20];
struct node*getnode(int x)
{
    struct node*p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    p->next=NULL;
    return p;
};
void readgraph(int n)
{
    struct node *p,*last;
    int i,choice,x;
    for(i=0;i<=n-1;i++)
    {
        last =NULL;
        do
        {
            printf("does the adjacent of p exists?(1/0)",i);
            scanf("%d",&choice);
            if(choice==1)
            {
                printf("the adjacent element node is %d",i);
                scanf("%d",&x);
                p=getnode(x);
                if (last==NULL)
                {
                    adj[i]=p;
                    last=adj[i];
                }
                else
                {
                    last->next=p;
                    last=p;
                }

            }
            }while(choice==1);
    }
}
void printgraph(int n)
{

int i;
struct node *p;
printf("adjacency list is\n");
printf("---------\n");
for(i=0;i<=n-1;i++)
{
        printf("%d:->",i);
        p=adj[i];
        while(p!=NULL)
        {
            printf("%d",p->info);
            p=p->next;
        }
        printf("\n");

    }
}
int main()
{
    int n,i;
    printf("input the no of nodes in the graph");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        adj[i]=NULL;
    }
    readgraph(n);
    printgraph(n);
    return 0;
}
