#include<stdio.h>
int main()
{
    int a[100][100][100];
    unsigned int x;
    x=(47)*100*100+(67)*100+(56);
    printf("\n%u",x);
    printf("\n%u",&a[47]);   
}