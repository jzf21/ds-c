#include<stdio.h>
#include<stdlib.h>
//circular queue using linked list
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

void enqueue(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Queue is full");
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
            rear->next = t;//last element is the new element
            rear = t;//rear is the new element
        }
        rear->next = front;//rear is connected to front
    }

}

void dequeue(){
    struct node *t;
    if(isEmpty()){
        printf("Queue is empty");
    }
    else if(front == rear){ //condition for one element
        front = rear = NULL;
        free(front);
    }
    else{
        t = front;//t is the first element
        front = front->next;//front is the second element
        rear->next = front;//rear is connected to front
        free(t);
    }
}

void display(){
    struct node *p = front;
    do{
        printf("%d ", p->data);
        p = p->next;
    }while(p != front);
    printf("\n");
}

int main(){
    while (1)
    {
        int choice;
        printf("1. Enqueue");
        printf("2. Dequeue");
        printf("3. Display");
        printf("4. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            int x;
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }
}
