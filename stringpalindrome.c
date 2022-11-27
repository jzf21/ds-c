#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
// palindrome stack
int top = -1;
char stack[50];
int pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}
int push(char x)
{
    if (top == 49)
    {
        printf("Stack is full\n");
        return -1;
    }
    stack[++top] = tolower(x);
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (int i = 0; i < len; i++)
    {
        if (tolower(str[i]) != pop())
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}