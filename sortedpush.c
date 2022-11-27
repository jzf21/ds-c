#include <stdio.h>
#include <stdlib.h>
// sorted push in stack
// should make it user defined

int stack[50];
int top = -1;
void push(int x)
{
    if (top == -1)
    {
        stack[++top] = x;
    }
    else if (stack[top] < x) // if stack[top] is less than ex push to stack else
    {
        stack[++top] = x;
    }
    else
    {
        int temp[50];
        int temp_top = -1;
        while (stack[top] > x) // check if stack[top] is less than x
        {
            temp[++temp_top] = stack[top--]; // if yes then push it to temp stack and pop it from stack
        }

        stack[++top] = x; // push greater element to stack and then push all the temp elements to stack
        while (temp_top != -1)
        {
            stack[++top] = temp[temp_top--];
        }
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

int display1()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    for (int i = 0; i <= top; i++)
    {
        printf("| %d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    while (1)
    {
        int c;
        int x;
        int choice;
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            printf("Enter the element to be pushed: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            c = pop();
            if (c == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Popped element is %d\n", c);
            }

        case 3:
            display1();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
