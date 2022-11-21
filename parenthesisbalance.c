#include <stdio.h>
#include <string.h>

// Check whether the parenthesis are balanced in an expression
int main()
{
    char str[100];
    int i, len, flag = 0;
    int top = -1;
    char stack[100];
    printf("Enter an expression: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == '(')
        {
            top++;
            stack[top] = str[i];
        }
        else if (str[i] == ')')
        {
            if (stack[top] == '(')
            {
                top--;
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    for (int i = 0; i < top; i++)
    {
        printf("%c", stack[i]);
        flag = 0;
        break;
    }
    if (flag == 1)
        printf("parenthesis are balanced");
    else
        printf("parenthesis are not balanced");
}