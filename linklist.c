#include <stdio.h>
#include<malloc.h>

struct Node
{
 int num;
 struct Node *next;
 
};

struct Node *Head=NULL;

struct Node* create(int x)
{
    struct Node *t1;
    t1=(struct Node*)malloc(sizeof(struct Node));
    
    t1->num=x;
    t1->next=NULL;
    return t1;
}
int isEmpty()
{
    if(Head==NULL)
     return 1;
    else 
     return 0;
}

void insert_front(int x)
{

    struct Node *t1;
    t1=create(x);
    if(isEmpty())
     Head=t1;
    else
    {
        t1->next=Head;
        Head=t1;
    }
    printf("inserted element is %d\n",t1->num);
}


    
 
void display()
{
    printf("display the link list");
    struct Node *t1;
    t1=Head;
    while(t1!=NULL)
    {
        printf("--> %d ",t1->num);
        t1=t1->next;
    }
    printf("\n");
}
void delete_front()

{
    int x;
    if(isEmpty())
      return 1;

    else
    {
        x=Head->num;
        Head=Head->next;
        return x;
    }
    
}

void main()
{
    insert_front(1);
      
    insert_front(2); 

    insert_front(3);
     
    insert_front(4);
    display();
    
   delete_front();
 printf("after deletion \n");
     display(); 
}



