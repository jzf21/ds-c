#include <stdio.h>

// Convert a given decimal number into binary and hex using stacks
int main()
{
    int dec, rem, i, j;
    int bin[100], hex[100];
    int top1 = -1, top2 = -1;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    int temp = dec;
    // Convert decimal to binary
    while (temp != 0)
    {
        rem = temp % 2;
        top1++;
        bin[top1] = rem;
        temp = temp / 2;
    }

    // Convert decimal to hex
    while (dec != 0)
    {
        rem = dec % 16;
        top2++;
        if (rem < 10)
        {
            hex[top2] = rem + 48;
        }
        else
        {
            hex[top2] = rem + 55;
        }
        dec = dec / 16;
    }

    printf("Binary: ");
    for (i = top1; i >= 0; i--)
        printf("%d", bin[i]);

    printf("\nHex: ");
    for (j = top2; j >= 0; j--)
        printf("%c", hex[j]);
}