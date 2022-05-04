#include<stdio.h>
void maxheapify(int a[1000],int i,int n)
{
    int t,j;
    while ((2*i)<=n)
    {
        j=2*i;
        if((j+1)<=n)
        {
            if(a[j+1]>a[j])
            {
                j=j+1;
            }
        }
        if(a[j]>a[i])
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
        else
        {
            break;
        }
        i=j;
    }
}
void buildmaxheap(int a[1000],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        maxheapify(a,i,n);
    }
}
void heapsort(int a[1000],int n)
{
    int t;
   buildmaxheap(a,n);
    for(int j=n;j>=2;j--)
    {
         t=a[1];
         a[1]=a[j];
         a[j]=t;
         maxheapify(a,1,j-1);
    }
}


main()
{
    int a[1000],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
