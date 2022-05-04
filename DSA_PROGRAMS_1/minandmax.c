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
void PreOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        printf("%d",T->data);
        PreOrderTraversal(T->left);
        PreOrderTraversal(T->right);
    }
}
void InOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d",T->data);
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
} void bstinsert(struct node **T,int x)
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

}
int bstsearch(struct node **t,int searching)
{
    struct node *p;
    p=(*t);
    while(p1==null)
    {


    }
}
int main()
{
    struct node *T=NULL;
 bstinsert(&T,105);
 bstinsert(&T,95);
 bstinsert(&T,75);
 bstinsert(&T,25);
 bstinsert(&T,85);
 bstinsert(&T,80);
 bstinsert(&T,90);
 bstinsert(&T,120);
 InOrderTraversal(T);

}
