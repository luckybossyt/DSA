#include<stdio.h>
#include<stdlib.h>
#define stacksize 100
#define TRUE 1
#define FALSE 0
struct stack
{
    int item[stacksize];
    int top;
};
struct stack s;

void initailizestack(void){
s.top=-1;
}

void push(int x){
    if(s.top==stacksize-1){
        printf("stack overflows");
       exit(1);
    }
    s.top=s.top+1;
    s.item[s.top]=x;
}

int pop(void){
int x;
if(s.top==-1){
    printf("stack underflows");
    exit(1);
}
x=s.item[s.top];
s.top=s.top-1;
return x;
}
int isempty(void){
if(s.top==-1)
    return TRUE;
else
    return FALSE;
}

main(){
    int n,m,rem;
initailizestack();
printf("enter a value ");
scanf("%d",&n);
while(n!=0)
{
    rem=n%8;
    push(rem);
    n=n/8;


}
while(!isempty())
{
    printf("%d",s.item[s.top]);
    s.top=s.top-1;
}
}
