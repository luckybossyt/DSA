#include<stdio.h>
struct node{
char data;
struct node* left;
struct node* right;
};
//////////////////////////////
struct node* GetNode(char x)
{
    struct node* p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
};
/////////////////////////
int PreOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        printf("%d",T->data);
        PreOrderTraversal(T->left);
        PreOrderTraversal(T->right);
    }
}
int InOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d \n",T->data);
        InOrderTraversal(T->right);
    }
}
void PostOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        PostOrderTraversal(T->left);
        PostOrderTraversal(T->right);
        printf("%d",T->data);
    }
}
int CountNodes(struct node* T)
{
    if(T==NULL)
        return 0;
    else if(T->left==NULL&&T->right==NULL)
        return 1;
    else
        return 1+CountNodes(T->left)+CountNodes(T->right);
}
int CountLeafNodes(struct node* T)
{
    if(T==NULL)
        return 0;
    else if(T->left==NULL&&T->right==NULL)
        return 1;
    else
        return CountLeafNodes(T->left)+CountLeafNodes(T->right);
}
int CountN1Nodes(struct node* T)
{
    if(T==NULL)
        return 0;
    else if((T->left==NULL&&T->right!=NULL)||(T->left!=NULL&&T->right==NULL))
        return 1;
    else
        return CountN1Nodes(T->left)+CountN1Nodes(T->right);
}
int CountN2Nodes(struct node* T)
{
    if(T==NULL)
        return 0;
    else if((T->left!=NULL&&T->right!=NULL))
        return 1;
    else
        return CountN2Nodes(T->left)+CountN2Nodes(T->right);
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;

}
int heightofbinarytree(struct node *T)
{
    if(T==NULL)
    {
        return 0;
    }
    else if(T->left==NULL && T->right ==NULL)
    {
        return 0;
    }
    else{
       return  1+max(heightofbinarytree(T->left),heightofbinarytree(T->right));
    }
}
/*void bstinsert(struct node **T,int x)
{ struct node * p,*q;

p=(*T);
q=NULL;
struct node *r=GetNode(x);
r->data=x;
if((*T)!=NULL)
{

while(p!=NULL)
{
    q=p;
    if(x<(p->data))
    {
        p=p->left;
    }
    else
        p=p->right;
}
   if (x<q->data){
    q->left=r;

    }
   else
   {


    q->right=r;
    }
}
else {
    (*T)=r;
}

}*/
struct node* bstinsert(struct node *t,int x)
{
    if((t)==NULL)
    {

       (t)=GetNode(x);
    }
    else
    {

        if(x<(t)->data)
        {
            (t)->left=bstinsert((t)->left,x);
        }
        else
        {

            (t)->right=bstinsert((t)->right,x);
        }
        return (t);
    }
}
int main()

{struct node *T=NULL;




T= bstinsert(T,105);

T= bstinsert(T,95);
T= bstinsert(T,75);

T= bstinsert(T,25);

T= bstinsert(T,85);

T= bstinsert(T,80);

T= bstinsert(T,90);

T= bstinsert(T,120);
PreOrderTraversal(T);

InOrderTraversal(T);
if(PreOrderTraversal(T)==InOrderTraversal(T))
{
    printf("yes it is bst");
}

}








