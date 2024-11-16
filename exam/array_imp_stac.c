#include <stdio.h>
#define MAX 5
int main()
{
    int stack[MAX];
    int top = -1;
    if (top < MAX - 1)
    {
        stack[++top] = 10;
        printf(" 10 is pushed into the stack \n");
    }
    else
    {
        printf(" Stack overflow \n");
    }
    if (top < MAX - 1)
    {
        stack[++top] = 20;
        printf(" 20 is pushed into the stack \n");
    }
    else
    {
        printf(" Stack overflow \n");
    }
    // display stack
    for (int i = top; i >= 0; i--)
    {
        printf(" %d\n", stack[i]);
    }
    // popped element ;
    if (top >= 0)
    {
        printf(" popped : %d\n", stack[top--]);
    }
    else
    {
        printf(" Underflow \n");
    }
    for (int i = top; i >= 0; i--)
    {
        printf(" %d", stack[i]);
    }
}