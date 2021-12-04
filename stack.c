#include <stdio.h>
#define size 10
int stack[20];
int top=-1;
int isfull()
{
    if(top==size-1)
    {
    return 1;
    }
    return 0;
}
int isempty()
{
    return(top<=-1);
}
void push(int x)
{
    if(isfull())
    {
        printf("stack is full");
        
    }
    else
    {
        top++;
        stack[top]=x;
        printf("%d\n",x);
    }
}
void display()
{
   printf("display");
   printf("\n");
    if(isempty())
    {
        printf("stack is underflow");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
            
        }
    }
}
void pop()

{
    printf("pop");
if(isempty())
{
    printf("stack is underflow");
}
else{
    printf("\n\t The popped elements is %d\n",stack[top]);
    top --;
}
    
}
int peek()
{
    if(isempty())
    {
    printf("stack underflow");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
int main()
{
 push(20);
 push(10);
  push(15);
  pop();
  display();
 return 0;
}


