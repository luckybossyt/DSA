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
}
int main()
{
struct node* Root=NULL;
Root=GetNode(1);
Root->left=GetNode(2);
Root->right=GetNode(3);
Root->left->left=GetNode(4);
Root->left->left->left=GetNode(5);
Root->left->left->left->left=GetNode(6);
PreOrderTraversal(Root);
printf("\n");
InOrderTraversal(Root);
printf("\n");
PostOrderTraversal(Root);
printf("\n");
printf("\n total number of nodes\n");
printf("%d\n",CountNodes(Root));
printf("\n total number of leaf nodes\n");
printf("%d\n",CountLeafNodes(Root));
printf("\n total number of N1 nodes\n");
printf("\n%d",CountN1Nodes(Root));
printf("\n totoal number of N2 nodes");
printf("%d\n",CountN2Nodes(Root));
printf("\n the height of node is");
printf("\n%d",heightofbinarytree(Root));

}
