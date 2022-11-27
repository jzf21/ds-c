#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next, *prev;
};
struct Node *front = NULL;
int push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
    {
        printf("Stack is full");
    }
    else if (front == NULL)
    {
        t->data = x;
        t->next = NULL;
        t->prev = NULL;
        front = t;
    }
    else
    {
        t->data = x;
        t->next = front;
        front->prev = t;
        t->prev = NULL;
        front = t;
    }
    return x;
}

int delete_front()
{
    struct Node *t;
    int x = -1;
    if (front == NULL)
    {
        printf("Stack is empty");
    }
    else if (front->next == NULL)
    {
        x = front->data;
        free(front);
        front = NULL;
    }
    else
    {
        t = front;
        x = t->data;
        front = front->next;
        front->prev = NULL;
        free(t);
    }
}

int delete_back(){
    struct Node *t;
    int x =-1;
    if(front==NULL){
        printf("Stack is empty");
    }
    else if(front->next==NULL){
        x=front->data;
        free(front);
        front=NULL;
    }
    else{
        t=front;
        while(t->next!=NULL){
            t=t->next;
        }
        x=t->data;
        t->prev->next=NULL;
        free(t);
    }
}

int insertatpos(int pos){
    struct Node *t,*p;
    int x=-1;
    if(pos==1){
        push(x);
    }
    else{
        t=(struct Node *)malloc(sizeof(struct Node));
        if(t==NULL){
            printf("Stack is full");
        }
        else{
            t->data=x;//t value assigned
            p=front;
            for(int i=0;i<pos-2;i++){
                p=p->next;
            }
            t->next=p->next;//shifted right
            p->next->prev=t;//shifted elements prev is inserted element
            t->prev=p;//inserted element prev is p(n-1th element)
            p->next=t;//p(n-1th element) next is inserted element
        }
    }
}


int display()
{
    struct Node *p = front;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int pop(int pos){
    struct Node *t,*p;
    int x=-1;
    if(pos==0){
        delete_front();
    }
    else{
        p=front;
        for(int i=0;i<pos-2;i++){
            p=p->next;
        }
        t=p->next;
        x=t->data;
        p->next=t->next;
        t->next->prev=p;
        free(t);
    }
}

int main()
{

    while (1)
    {
        int choice;
        printf("1. push\n");
        printf("2. insert at position\n");
        printf("3. Delete from front\n");
        printf("4. Delete from back\n");
        printf("5. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            int x;
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            printf("Enter the position to be inserted: ");
            int pos;
            scanf("%d", &pos);
            printf("Enter the element to be pushed: ");
            int x;
            scanf("%d", &x);
            insertatpos(pos);
            break;
        case 3:
        delete_back();
            break;
        case 4:
            delete_front();
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }
}