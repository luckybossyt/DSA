#include<stdio.h>
int n=0;
int pqinsert(int a[],int key)
{
    int i=0;
    if(n==0)
    {
        a[0]=key;
    }
    else{
    while(i<=n-1 && key>=a[i])
    {
        i=i+1;

    }

    for(int j=n-1;j>=i;j--)
    {
        a[j+1]=a[j];
    }
    }
    a[i]=key;
    n=n+1;
}
int dequeue(int a[])
{
    int x;
    int j;
    x=a[0];
    for(j=1;j<=n-1;j++)
    {
        a[j-1]=a[j];
    }
    n=n-1;
    return x;
}
int main()
{
    int a[7];
    int i,x;
    //int n;
    int key;
    pqinsert(a,1);
    pqinsert(a,2);
    pqinsert(a,3);
    pqinsert(a,4);
    pqinsert(a,5);
    pqinsert(a,6);
     key=3;
     pqinsert(a,key);
     x=dequeue(a);
      printf("%d ",x);
     for(i=0;i<n;i++)
     {
         printf("%d",a[i]);
     }


}



