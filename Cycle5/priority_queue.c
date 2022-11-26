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
    
}