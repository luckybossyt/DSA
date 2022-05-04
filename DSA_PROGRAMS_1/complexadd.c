#include<stdio.h>
struct complex
{
   double a;
   double b;
   double sum;

};
int main()
{
    struct complex c;
    printf("\n enter the first number");
    scanf("\n%lf",&c.a);
    printf("\n enter the second the number");
    scanf("\n%lf",&c.b);
    printf("\n%lf,%d",c.a,c.b);
    c.sum=c.a+c.b;
    printf("\n the sum is %lf",c.sum);
    return 0;


}
