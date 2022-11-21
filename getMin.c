#include <stdio.h>
int stack[50];
int top = -1;
void push(int x)
{
    if (top == -1)
    {
        stack[++top] = x;
    }
    else if (stack[top] > x)
    {
        stack[++top] = x;
    }
}

int pop()
{
    return stack[top--];
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(2);
    int min = pop();
    printf("%d", min);
}