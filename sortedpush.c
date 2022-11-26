#include <stdio.h>
#include <stdlib.h>
// sorted push in stack 
//should make it user defined

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

        stack[++top] = x; //push greater element to stack and then push all the temp elements to stack
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
    push(5);
    push(6);
    push(7);
    push(8);
    push(2);
    push(7);
    pop();
    pop();
    push(1);
    display1();
    int min = pop();
    printf("%d", min);
}
