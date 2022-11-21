#include<stdio.h>
#include<stdlib.h>
//two stack in one
int stack[50];
int top1 = -1;
int top2 = 50;
void push1(int x)
{
    if (top1 == top2 - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack[++top1] = x;
}
void push2(int x)
{
    if (top1 == top2 - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack[--top2] = x;
}
int pop1()
{
    if (top1 == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top1--];
}
int pop2()
{
    if (top2 == 50)
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top2++];
}

int display1()
{
    if (top1 == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    for (int i = 0; i <= top1; i++)
    {
        printf("| %d ", stack[i]);
    }
    printf("\n");
}
int display2()
{
    if (top2 == 50)
    {
        printf("Stack is empty\n");
        return -1;
    }
    for (int i = 49; i >= top2; i--)
    {
        printf("| %d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    while(1){
        int choice;
        printf("1. Push in stack 1\n");
        printf("2. Push in stack 2\n");
        printf("3. Pop from stack 1\n");
        printf("4. Pop from stack 2\n");
        printf("5. Display stack 1\n");
        printf("6. Display stack 2\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to be pushed: ");
                int x;
                scanf("%d", &x);
                push1(x);
                break;
            case 2:
                printf("Enter the element to be pushed: ");
                int y;
                scanf("%d", &y);
                push2(y);
                break;
            case 3:
                printf("The popped element is: %d\n", pop1());
                break;
            case 4:
                printf("The popped element is: %d\n", pop2());
                break;  
            case 5:
                display1();
                break;
            case 6:
                display2();
                break;
            case 7:
                break;
                exit(0);    

    }
    



    
    }
}