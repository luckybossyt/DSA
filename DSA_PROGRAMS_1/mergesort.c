#include<stdio.h>
int mid;
int c[100];
int merge(int a[100],int low,int heigh)
{
    int i,j,k;
    i=low;j=mid+1;k=low;
    while(i<=mid && j<=heigh)
    {
        if (a[i]<a[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=a[j];
            k++;
            j++;

        }


    }
    while(i<=mid)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=heigh)
    {
        c[k]=a[j];
        j++;
        k++;
    }

}
void printarray(int a[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
}
void mergesort(int a[100],int low,int heigh)
{
    if(low<heigh)
    {
        mid=(low+heigh/2);
        mergesort(a[],low,mid);
        mergesort(a[],mid+1,heigh);
        mergea(a[],low,heigh);
    }
    int main ()
    {
        int q,p;
        printf("enter the size of array");
        scanf("\n%d\n",&q);
        printf("enter the unsorted array");
        for(p=1;p<=q;p++)
        {
            printf("\n%d",&a[p]);
        }
        mergesort(a,q);
        printf("the sorted array is\n=>");
        printarray(a,q);

    }
