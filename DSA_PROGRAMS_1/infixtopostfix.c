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
void

void push(char x){
    if(s.top==stacksize-1){
        printf("stack overflows");
       exit(1);
    }
    s.top=s.top+1;
    s.item[s.top]=x;
}
void stack top(s)
{
   x=s.item(s.top);
   return x;

}

char pop(void){
char x;
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
void main()
{
    char infix(),char infix(),int j
    initializestack();
    while(infix(i)!='\0')
    {
        symbol=infix[j]



}[0:06 pm, 13/10/2021] Poorvi Abes Ec:  char postfix[100], infix[100];
    char x, symbol;
    int i=0, j=0;

    InitializeStack();
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    while(infix[i]!= '\0')
    {
        symbol= infix[i];
        if(symbol>='a' && symbol<= 'z')
        {
            postfix[j]= symbol;
            j++;
        }
        else
        {
            while(!IsEmpty && Prcd(StackTop()), symbol)
                {x= postfix[j];
                j++;
                }
        }
    }
        Push();
        i++;
        while(!IsEmpty())
        {
            x=Pop();
            j++;
        }
}
