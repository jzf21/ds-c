#include<stdio.h>
#include<string.h>
#include<ctype.h>


char exporg[50],expr[50], stack[50],type,i,c;
int top = -1,exprtop = -1, stacktop = -1;

void pop(char a[50],int t)
{
    char c;
    c = a[t];
    a[t] = 0;
    t--;
    printf("The deleted element is %c\ntop = %d\n",c,t);
   
}


void push(char a[50],char c,int t)
{
    a[t+1] = c;
    t = t+1;    
    printf("The inserted element is %c\ntop = %d\n",c,t);
}




void get_type(char t)
{
    printf("Maya\n");
    printf("%c",t);

switch(type)
{
case'(':push(stack,t,stacktop);

case')':do
        {
            pop(stack,stacktop);
            stacktop--;
            push(expr,c,exprtop);
            exprtop++;
        }while(stack[stacktop]!='(');
        pop(stack,stacktop);
        stacktop--;


case'+':if(stack[stacktop]==-1)
        {
            printf("hello\n");
        do
        {
            pop(stack,stacktop);
            stacktop--;
            push(expr,c,exprtop);
            exprtop++;
        }while(stack[stacktop]!='-'||stack[stacktop]!='/'||stack[stacktop]!='*'||stack[stacktop]!=-1);
        push(stack,t,stacktop);
        stacktop++;
        }

        else
        {
            push(stack,t,stacktop);
            stacktop++;
        }
        break;


case'-':if(stack[stacktop] == '+'||'/'||'*'||(stack[stacktop]==-1))
        {
        do
        {
            pop(stack,stacktop);
            stacktop--;
            push(expr,c,exprtop);
            exprtop++;
        }while(stack[stacktop]!='+'||'/'||'*'||stack[stacktop]!=-1);
        push(stack,t,stacktop);
        stacktop++;
        }

        else
        {
            push(stack,t,stacktop);
            stacktop++;
        }
        break;

case'/':if(stack[stacktop] == '*'||stack[stacktop]==-1)
        {
        do
        {
            pop(stack,stacktop);
            stacktop--;
            push(expr,c,exprtop);
            exprtop++;
        }while(stack[stacktop]!='*'||stack[stacktop]!=-1);
        push(stack,t,stacktop);
        stacktop++;
        }

        else
        {
            push(stack,t,stacktop);
            stacktop++;
        }
        break;

case'*':if(stack[stacktop] == '/'||stack[stacktop]==-1)
        {  
        do
        {
            pop(stack,stacktop);
            stacktop--;
            push(expr,c,exprtop);
            exprtop++;
        }while(stack[stacktop]!='/'||stack[stacktop]!=-1);
        push(stack,t,stacktop);
        stacktop++;
        }

        else
        {
            push(stack,t,stacktop);
            stacktop++;
        }
        break;
}
}



void main()
{

    printf("Stack Functions\nRitu Maria\nRoll No. 32\n");
    printf("Enter the expression\n");
    scanf("%s",exporg);
    for(i=0;exporg[i]!='\0';i++)
    {
    if(isalnum(exporg[i]))
    {
        push(expr,exporg[i],exprtop);
        exprtop++;
    }
    else
    {
       
        exporg[i] = type;
        printf("%c",t);
        get_type(type);
    }
    printf("%s",stack);
    }
    while(stacktop!=-1)
    {
        pop(stack,stacktop);
        stacktop--;
        push(expr,c,exprtop);
        exprtop++;
    }
   
    printf("%s",expr);
}
