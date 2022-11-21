//postfix evalation with multiple digit numbers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int stack[50];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    char exp[50];
    printf("Enter the expression: ");
    scanf("%s", exp);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] >= '0' && exp[i] <= '9')
        {
            push(exp[i] - '0');
        }
        else
        {
            int a = pop();
            int b = pop();
            switch (exp[i])
            {
            case '+':
                push(a + b);
                break;
            case '-':
                push(a - b);
                break;
            case '*':
                push(a * b);
                break;
            case '/':
                push(a / b);
                break;
            case '^':
                push(pow(a, b));
                break;
            }
        }
    }
    printf("The result is: %d", pop());
}