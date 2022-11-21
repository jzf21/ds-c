#include <stdio.h>
#include <string.h>
// palindrome stack

int main()
{
    char str[100];
    int i, j, len, flag = 0;
    int top = -1;
    char stack[100];
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        top++;
        stack[top] = str[i];
    }
    for (j = 0; j < len; j++)
    {
        if (stack[top] == str[j])
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
    if (flag == 1)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");
    return 0;
}