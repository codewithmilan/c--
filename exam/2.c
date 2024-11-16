#include <stdio.h>
#define max 5
int main()
{
    int queue[max];
    int rear = -1, front = -1;
    if (rear < max - 1)
    {
        if (front == -1)
            front = 0;
        queue[++rear] = 10;
        printf(" 10 is enqueue to queue \n");
    }
    else
    {
        printf(" Queue overflow\n");
    }
    if (rear < max - 1)
    {
        if (front == -1)
            front = 0;
        queue[++rear] = 20;
        printf(" 20 is enqueue to queue \n");
    }
    else
    {
        printf(" Queue overflow\n");
    }
    // display
    for (int i = front; i <= rear; i++)
    {
        printf(" %d ", queue[i]);
    }

    // popped
    if (front != -1 && front <= rear)
    {
        printf(" \ndequeue : %d", queue[front++]);
    }
    printf(" \nAfter dequeue :");
    for (int i = front; i <= rear; i++)
    {
        printf(" %d", queue[i]);
    }
}