#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty()
{
    if (front == NULL && rear == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Stack is full");
    }
    else{
        t->data=x;
        t->next=front;
        front=t;
    }

}
//priority queue push
void ppush(int x){
    struct node *t,*p;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Stack is full");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            p=front;
            while(p->next!=NULL && p->next->data>x){
                p=p->next;
            }
            t->next=p->next;
            p->next=t;
        }
    }
}

