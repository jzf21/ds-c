#include <stdio.h>
#include <stdlib.h>
// linkedlist stack
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Stack is full\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct node *t;
    int x = -1;
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
int display()
{
    struct node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int findmid()
{
    struct node *slow;
    struct node *fast;
    slow = top;
    fast = top;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main()
{
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