#include<stdio.h>
#include<stdlib.h>
//queue using linkedlist
struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct node *t;
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        t = front;
        front = front->next;
        x = t->data;
        free(t);
    }
    return x;
}

int display()
{
    struct node *p = front;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d", p->data);
}

int main(){
    while (1)
    {
        int choice;
        int r;
        printf("1. Push in stack 1\n");

        printf("2. Pop from stack 1\n");

        printf("3. Display stack 1\n");

        printf("4. Exit\n");
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
            printf("The popped element is: %d\n", pop());
            break;
        case 3:
            display();
            break;

        case 4:
            r = findmid();
            printf("The middle element is: %d\n", r);
        }
    }
}